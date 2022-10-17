class Solution {
public:
    
    void fun(int i, int j, string s, vector<string>& vs){
        
        while(i>=0 and j<s.length() and s[i]==s[j]){
            vs.push_back(s.substr(i,j-i+1));
            i--;j++; 
        }
        
    }
    
    
    
    int countSubstrings(string s) {
        
        if(s.length()==0) return 0; 
        vector<string> vs; 
        for(int i = 0 ; i < s.length(); i++){
            fun(i,i,s, vs);
            
            // if(i<=s.length()-1)
            fun(i,i+1,s, vs);
        }
        
        return vs.size();
    }
    
    /* 
    
    using dp 
    
       string s;
    vector<vector<int>>dp;
    
    int f(int l , int r){
        if(l>r)return 1;
        if(l==r)return 1;
        if(dp[l][r]!=-1)return dp[l][r];
        if(s[l]!=s[r])return dp[l][r]=0;
        if(f(l+1,r-1))return dp[l][r]=1;
        return dp[l][r]=0;
    }
    
    int countSubstrings(string s) {
        this->s=s;
        int ans=0,n=s.size();
        dp.resize(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+=f(i,j);
            }
        }
        return ans;
    }
    
    */
    
};