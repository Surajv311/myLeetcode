class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
     
//          easy but logical. 
        
        /*
        
        let total candies of alice: sum of... = suma
        total candies of bob: sum of... = sumb
        
        now since we must swap only 1 from each set...
        
        hence: suma-x+y = sumb+x-y
        therefore: (sumb-suma+2x)/2 ~ (sumb-suma)/2 + x
        
        hence on simplification:
        x = (suma-sumb+2y)/2 ~ (suma-sumb)/2 + y
        y = (sumb-suma+2x)/2 ~ (sumb-suma)/2 + x
        
        */
        
        int suma = accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int sumb = accumulate(bobSizes.begin(),bobSizes.end(),0);

        int sumdiff = (sumb-suma)/2;
        /*
        hence, we know sumdiff, therefore : 
        
        x = -sumdiff + y
        y = sumdiff + x
        */
        
        
//         using set to find the value of x & y....
        
        set<int>sa(aliceSizes.begin(),aliceSizes.end());
        set<int>sb(bobSizes.begin(),bobSizes.end());
        
        vector<int> ans; 
        
        for(auto x: sa){
            
            if(sb.find(x+sumdiff)!=sb.end())
            {
                // ans.push_back(x);
                // ans.push_back(x+sumdiff);
                // break;
                return {x, x+sumdiff};
            }
        }
        
        return {0,0};//ans;         
       
    }
};