class Solution {
public:
    
//     vector<vector<int>> dp
//     int dp[][]
    
    bool fun(string s, string p, int i , int j , int dp[2009][2009]){
        
        // MEMOIZATION....
        
        if(dp[i][j]!=-1) return dp[i][j]; 
        
        
//         if our p string ends, then s string must have also ended... else wrong
        
        if(j==p.length()) return i==s.length(); 
        
// if s string ends, then p string must only be having '*'... to have a sequence... 
//             and keep iterating pointer ahead... 
        
        if(i==s.length()) return p[j]=='*' and fun(s,p,i,j+1,dp);
        
//         if none of the strings ended, & if p has '*'.. then, just keep incrementing, ... we can have 2 cases, either we keep incrementing i or, only j... the code to check if s[i]==p[j], would be in else case...:
        
        if(i!=s.length() and j!=p.length() and p[j]=='*') 
     return dp[i][j] = fun(s,p,i,j+1,dp) or fun(s,p,i+1,j,dp); 
   
        else {
// when our p[j]=='?' or the case when the lengths haven't reached the end... 
//             we must ensure i<s.length() & j<p.length... 
//             also our s[i] could equal p[j] or our p[j] could be '?'...
            
        bool check = i<s.length() and j<p.length() and (s[i]==p[j] or p[j]=='?');
        return dp[i][j] = check and fun(s,p,i+1,j+1,dp);
        }
        
        return dp[s.length()][p.length()]; 
    }
    
    
    bool isMatch(string s, string p) {
        
        int m = s.length(); int n = p.length(); 
        
/*       

2D VECTOR IS GIVING TLE.... 
        CONCLUSION: 2D array faster than > 2D vector... 
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1))
        
 int dp[2009][2009] >>>> vector<vector<int>> dp(m+1,vector<int>(n+1,-1));  
considering long long dp[10007][10007]... giving error..., 
 note the limits of the question... 
 
 */
        
       int dp[2009][2009]; 
        
        // memset(dp,-1, sizeof(dp));
         for(int i=0; i<m+1; i++){
            for(int j=0; j<n+1; j++){
                dp[i][j] = -1;
            }
        }
        
        return fun(s,p,0,0,dp);
        
    }
};