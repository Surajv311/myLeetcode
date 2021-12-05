class Solution {
public:
    
     bool fun(string a, string b, string c, int dp[500][500]){
        
        if(dp[a.length()][b.length()]!=-1) return  dp[a.length()][b.length()];
        
        if(a.length()==0 and b.length()==0 and c.length()==0) return true;
        
        if(c.length()==0) return false; 
        
        bool x = a.length() and a[0]==c[0] and fun(a.substr(1),b,c.substr(1),dp);
        bool y = b.length() and b[0]==c[0] and fun(a,b.substr(1),c.substr(1),dp);
        
        return dp[a.length()][b.length()] = x or y; 
        
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        // int dp[s1.length()+1][s2.length()+1];
        int dp[500][500];
        
        memset(dp,-1,sizeof(dp)); 
        
        return fun(s1,s2,s3, dp);
    }
};