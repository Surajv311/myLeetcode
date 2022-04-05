class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l , r; 
        
        l = 0; r = height.size()-1; 
        
        int ans = INT_MIN; 
        int a,b, ar; 
        while(l<r){
            
        a = height[l]; 
        b = height[r]; 
        
        ar = min(a,b)*(r-l);
            
            ans = max(ans,ar);
            
        if(a<b) l++;
        else if(a>b) r--; 
            else{
                l++; r--; 
            }
            
        }
        
        return ans; 
        
    }
};