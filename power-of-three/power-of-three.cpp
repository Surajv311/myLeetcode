class Solution {
public:
    bool isPowerOfThree(int n) {
//         max power of 3 less than INT_MAX is 3^19... 
    return (n > 0) && ((int)(pow(3, 19)) % n == 0);
    }
};