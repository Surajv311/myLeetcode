class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0]; 
        int fast = nums[0];
        
   do{
     slow = nums[slow];
       fast = nums[nums[fast]];
       
   }while(slow!=fast);
        
       // means now they have touched...
//        so....
       
      // moving one of the pointers i.e slow pointer to start position
        fast = nums[0];
        
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
            // moving one time...
        }
        
        return slow; 
        
        
    }
};