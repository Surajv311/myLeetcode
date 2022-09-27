class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long low = 1; 
        long high = *max_element(piles.begin(), piles.end());
                
        // now binary search
        while(low<=high){
       
            long mid = (low+high)/2;
            long time = 0; 
            for(auto i:piles){
                time+=ceil((double)i/mid);
            }
            
            if(time>h)low = mid+1; 
            else high = mid-1; 
            
        }
        
        return low; 

//         complexity: o(log(max n)*n);
    }
};