class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        vector<int> ans(pref.size());
        
        ans[0]= pref[0]; 
        for(int i = 1 ; i < pref.size(); i++){
            ans[i] = pref[i]^pref[i-1]; 
        }
// note that since pref[i] = pref[i-1] ^ A[i] should be true, hence ~ pref[i] ^ pref[i-1] = A[i]
        return ans; 
        
        
        
    }
};