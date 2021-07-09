class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        if(s.length()==0 or wordDict.size()==0) return false;
        
        int n = s.length();
        vector<bool> dp(n+1,false);
        
        dp[0] = true;
        
        for(int i = 1 ; i <= n ;i++){
            
            for(int j = i-1 ; j>=0 ;j--){
                
                if(dp[j]){
                    
                    string ss = s.substr(j,i-j);
                    
                    auto it = find(wordDict.begin(),wordDict.end(),ss);
                    
                    if(it!=wordDict.end()){
                        
                        dp[i] = true;
                        break;                     
                        
                    }
                    
                }

                
            }

        }
        
        return dp[n];
        
        
    }
};