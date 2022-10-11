class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
      
       
        int id = logs[0][0]; int lt = logs[0][1]; // id & leaveTime 
        
        int diff; 
        
        for(int i = 0; i < logs.size()-1; i++)
        {

            diff = logs[i+1][1]-logs[i][1]; 
            
            if(diff>lt){
                lt = diff; 
                id = logs[i+1][0];
            }
            
           
            else if(diff==lt) id = min(id,logs[i+1][0]); // return minimum id 
        }
            
    return id;
        
    }
};