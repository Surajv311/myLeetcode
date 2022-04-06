class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        
        long long int MOD = 1e9 + 7; 
        unordered_map<int,long> mp; 
        
        int ans = 0; 
        
        for(int i =0 ; i < arr.size(); i++){
            
            ans = (ans+mp[target-arr[i]])%MOD; 
            
            for(int j = 0 ; j < i ; j++){
                
                mp[arr[i]+arr[j]]++;
                
            }
            
            
        }
        
        return ans; 
        
    }
};