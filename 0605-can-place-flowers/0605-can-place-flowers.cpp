class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
//         // need to check prev and next places is 0 for flower to pant based on the conditions
//         int count = 0; 
//         vector<int> x = flowerbed;
//         for(int i = 1 ; i < x.size()-2; i++)
//         {
            
//             if(x[i]==0)
//             {
//                 int prev = (x[i-1]==0)?0:1; 
//                 int next = (x[i+1]==0)?0:1; 
//                 if(prev==0 and next==0){
//                 // if(prev==next==0){
//                     count++;
//                 x[i]=1;
//                 }
//             }
            
//         }
//         // edge cases
//         int ss = x.size()-3;
//         if(x[0]==0 and x[1]==0 and x[2]==1) count++;
//         if(x[ss+2]==0 and x[ss+1]==0 and x[ss]==1) count++;
        
//         // int ss = x.size()-1;
//         // if(x[ss-2]==1 and x[ss-1]==0 and x[ss]==0) count++;
        
        
        
        
//         return count>=n;
        
         int count = 0;
        
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                int prev = (i == 0 || flowerbed[i - 1] == 0) ? 0 : 1;
                int next = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) ? 0 : 1;
                
                if(prev == 0 && next == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};