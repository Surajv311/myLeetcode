class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
//         unordered_set<int> s;
        
//         for(auto x:nums) s.insert(x);
        
//         int count = 0; 
        
//         for(auto x: nums){
            
//             if(!s.count(x-1)){
                
//                /*  if a number one less than x doesn't exist means
//                     x is the minimum number and know we can move
//                     upwards and count all the numbers in this
//                     streak. As if a number less than x existed means
//                     x is not the minimum so we skip it. We must start
//                     with minimum number only and move upwards
//                     to maintain o(n) complexity... 
//                 */ 
                
//                 int num = x; 
//                 int curCount = 1;
                
//                 while(s.count(num+1)){
//                     curCount++;
//                     num++; // incrementing num... 
//                 }
                
//                 count = max(count,curCount);
//             }
//         }
            
//             return count;            
   
        
        // practice attempt:
        
        
        // insert operation in set is o(logn)
        
        if(nums.size()==0) return 0;
        
        unordered_set<int> s; 
        for(auto i: nums) s.insert(i);
        
        // brute force will be to sort the whole array and then find the longest consecutive sequence, which is iterating and checking if a[i] is a[i-1] + 1, means incrementing by 1.. since it wants consequtive, we also maintain a flag which will be holding the max of the count++ we get.....
        
        // coming to optimal approach
        // we check the no. and see if count or no. less than that exist... basically jump into the lowest no. and then increment and increase the count...
        
        int count = INT_MIN; 
        
         for(auto x: nums){
            
            if(!s.count(x-1)){
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