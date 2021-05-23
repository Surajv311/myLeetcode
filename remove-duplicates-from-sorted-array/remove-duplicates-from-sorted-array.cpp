class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0; 
        
    for(int j = 1; j < nums.size();j++){
        
        if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j]; 
           
        }
        
    }
        
        if(nums.size()==0){
            return 0; 
        }
        
        return i+1; 
    }
    
    /*
    WE CAN ALSO USE SET STL ......
    
    or
    
    {
    nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
	return nums.size() ;
    }
    
    
    */
};