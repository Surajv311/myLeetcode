class Solution {
public:
    // TO TEST..............
    
    bool isMatch(string s, string p) {
        int i=0, j=0;
        
        //i is pointer on s
        //j is pointer on p
        int x = s.size(), y = p.size();
        int t[2002][2002];
        
        for(int k=0; k<x+1; k++){
            for(int m=0; m<y+1; m++){
                t[k][m] = -1;
            }
        }
        return fun(s,p,i,j, t);
    }
    
    bool fun(string& s, string& p, int i, int j, int t[][2002]){
        //1. Base case
        //a. String p has ended - s must have ended for a match between them.
        if(j==p.size()) return i == s.size();
        
		//Check if result exists
        if(t[i][j] != -1) return t[i][j];
		
        //b. String s has ended - p[j] could only be '*' or multiple '*' for a match.
        if(i==s.size()) return (p[j] == '*' && fun(s,p,i,j+1, t));
        
        
        //2. If none of them has ended and p[j] is '*', nothing can be said before comparing rest of the strings, both of them.
        if(p[j] == '*') {
            t[i][j] = fun(s,p,i+1,j,t) || fun(s,p,i,j+1, t);
            return t[i][j];
        }
        
        //3. Else, when p[j] = '?' or a character - If it is a character it must be same as s[i]
        else{
            bool sameChar = i<s.size() && (p[j] == s[i] || p[j] == '?');
            t[i][j] = (sameChar && fun(s,p,i+1,j+1, t));
            return t[i][j];
        }
    }
//     bool fun(string s, string p, int i , int j , vector<vector<int>>dp){
        
        
//         // MEMOIZATION....
        
//         if(dp[i][j]!=-1) return dp[i][j]; 
        
        
// //         if our p string ends, then s string must have also ended... else wrong
        
//         if(j==p.length()) return i==s.length(); 
        
// // if s string ends, then p string must only be having '*'... to have a sequence... 
// //             and keep iterating pointer ahead... 
        
//         if(i==s.length()) return p[j]=='*' and fun(s,p,i,j+1,dp);
        
// //         if none of the strings ended, & if p has '*'.. then, just keep incrementing, ... we can have 2 cases, either we keep incrementing i or, only j... the code to check if s[i]==p[j], would be in else case...:
        
//         if(i!=s.length() and j!=p.length() and p[j]=='*') 
//             return dp[i][j] = fun(s,p,i,j+1,dp) or fun(s,p,i+1,j,dp); 
            
//         else {
// // when our p[j]=='?' or the case when the lengths haven't reached the end... 
// //             we must ensure i<s.length() & j<p.length... 
// //             also our s[i] could equal p[j] or our p[j] could be '?'...
            
//         bool check = i<s.length() and j<p.length() and (s[i]==p[j] or p[j]=='?');
        
//         return dp[i][j] = check and fun(s,p,i+1,j+1,dp);
//         }

//     }
    
    
//     bool isMatch(string s, string p) {
        
//         int m = s.length(); int n = p.length(); 
// vector<vector<int>> dp(m+1,vector<int>(n+1,-1));        
//         return fun(s,p,0,0,dp);
        
//     }
};