class Solution {
public:
    int maxArea(vector<int>& height) {
        
      int l,r; 
        
    l = 0  ; r = height.size()-1; 
        
        int ar = INT_MIN;
        
        while(l<r){
            
            ar = max(ar,abs(r-l)*min(height[l],height[r]));
            
            if(height[l]<height[r]) l++;
            else if(height[l]>height[r]) r--;
            else{
                l++;r--;
            }
            
        }
        
        return ar;
    }
};