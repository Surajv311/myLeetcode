class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        
        for(auto x:nums) s.insert(x);
        
        int count = 0; 
        
        for(auto x: nums){
            
            if(!s.count(x-1)){
                
               /*  if a number one less than x doesn't exist means
                    x is the minimum number and know we can move
                    upwards and count all the numbers in this
                    streak. As if a number less than x existed means
                    x is not the minimum so we skip it. We must start
                    with minimum number only and move upwards
                    to maintain o(n) complexity... 
                */ 
                
                int num = x; 
                int curCount = 1;
                
                while(s.count(num+1)){
                    curCount++;
                    num++; // incrementing num... 
                }
                
                count = max(count,curCount);
            }
        }
            
            return count;            
   
    }
};