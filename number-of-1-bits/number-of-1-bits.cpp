class Solution {
public:
    int hammingWeight(uint32_t n) {
         
//         int x = 0;
    
//     while (n) {
//         n &= (n - 1);
//         x++;
//     }
    
//     return x;
        return __builtin_popcount(n);
    }
};