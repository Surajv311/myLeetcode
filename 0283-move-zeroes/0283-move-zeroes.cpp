class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int temp = 0; 
        int start =0; 
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[start], nums[temp]);
                start++;
            }
            // if 0 encountered, temp incremented pointer goes ahead than other pointer to make swaps possible in next iteration
            temp++;
        }
        
        
        
    }
};