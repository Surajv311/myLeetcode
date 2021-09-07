class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//         xor magic
        
        int x = 0;
     for (int i = 0; i < nums.size(); ++i) {
         x ^= nums[i];
     }
     return x;
     
        /*
        
        let a number be x. hence: x^x^x = x & x^x = 0
        
        
        */
        
    }
};