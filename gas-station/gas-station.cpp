class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int tot = 0 ; 
        int sum = 0 ; 
        int ind = 0;
        int sz = gas.size(); // or cost.size()...
        
        for(int i = 0 ; i <sz ;i++ )
        {
            
            sum+=gas[i]-cost[i];
            
            if(sum<0){
                
                tot+=sum;
                sum = 0 ; 
                ind = i+1;                 
            }
        }
//so my total positive sum must exceed total negative sums.. to complete a loop   

        tot+=sum ;
        
        return tot<0?-1:ind; 
    }
};