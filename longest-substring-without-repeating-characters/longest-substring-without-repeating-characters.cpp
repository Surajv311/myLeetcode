class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> v(256,-1);
        
        int left , i ; left = i = 0; 
        int mlen = 0;
        
 while(i<s.length()){
            
            if(v[s[i]]!=-1) left = max(left,v[s[i]]+1);
            
            v[s[i]] = i;
     
     mlen = max(mlen,i-left+1);
            i++;
        }
        
        return mlen;
    }
};