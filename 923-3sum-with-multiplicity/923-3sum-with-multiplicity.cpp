class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        unordered_map<int,int>mp;
        long long int MOD = 1e9 + 7; 
        int k = 0; 
        int sum=0;
        for(int i = 0; i<arr.size();i++){
            
            k=(k+mp[target-arr[i]])%MOD;
                
                for(int j = 0;j<i;j++){
                    sum = arr[j]+arr[i];
                    mp[sum]++;
                    
                }
            
            
        }
        
        return k;
    }
};