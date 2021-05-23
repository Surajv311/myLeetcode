class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        
        int maxC = 0, count = 0;
        for (auto i : nums) {
            if (i == 1){
                 maxC = max(++count, maxC);
            }
            else{
                count = 0;
            } 
        }
        return maxC;
        
    }
};