class Solution {
public:
    
    int count; 
    
    void merge(vector<int> &nums, int low , int mid , int high){
        
        int x = low; int y = mid + 1; 
        
        while(x<=mid and y<=high){
            
            if((long)nums[x] > (long)2*nums[y])
            {
                count+=(mid-x+1);
                y++;
            }
            else{
                x++;
            }
                        
        }
        
        sort(nums.begin() + low , nums.begin()+high+1); 
       return;  
        
    }
    
    int mergeSort(vector<int> &nums,int low, int high ){
        int count=0; 
        if(low<high){
            
            int mid = low + (high-low)/2; 
            //count+= 
                mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high); 
          merge(nums,low,mid, high);
            
        }
        
        return count; 
    }
    
    int reversePairs(vector<int>& nums) {
        
        count = 0; 
        int size = nums.size()-1; 
       (mergeSort(nums,0,size)); 
        
        return count;         
        
    }
};