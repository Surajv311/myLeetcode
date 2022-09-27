class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
//         if(position.empty() or speed.empty()) return 0; 
        
//         priority_queue<vector<double>> pq; // max heap 
//         int n = position.size(); 
        
//         for(int i = 0 ; i < n; i++)
//         {
//             double time = (double)abs(target-position[i])/speed[i];
//             double pos = (double)abs(position[i]);
//             double spd = (double)speed[i]; 
//             pq.push({pos,spd,time});
//         }
            
//         int fleet = 0 ; 
//         while(true){
            
//             if(pq.size()==1){
//                 fleet++; break;
//             }
            
//             auto ahead = pq.top(); 
//             pq.pop(); 
//             auto behind = pq.top(); 
//             pq.pop(); 
            
//             if(ahead[2]>=behind[2]){
//                 // means time taken by car ahead, since our queue is storing/sorting based on distance is more means low speed & then means car behind can overtake car ahead 
//                 // if it can overtake means they may end up becoming a fleet, so we must drop car behind, since when car behind merges with car ahead, the speed will be that of car ahead which is low speed for both cars now...
//                 pq.push(ahead);
//             }
            
//             else{
//                 fleet++; 
//                 pq.push(behind);
//             }
//         }
        
//         return fleet; 
        
    
    // other approach is play with the time......
        
        vector<pair<int,double>> v; // having position & time, position used to sort the whole list in order & time used to find the fleet 
        int n = position.size(); 
        for(int i = 0 ; i < n; i++)
        {
            double time = (double)abs(target-position[i])/speed[i];
            int pos = position[i];
            v.push_back({pos,time});
        }
        
        sort(v.begin(), v.end());
        
        double xtime = 0; int fleet = 0; 
        // iterate backwards 
        for(int i = n-1; i>=0; i--){
             
            auto t = v[i].second-xtime;
            
            if(t>0){
                fleet++; 
                xtime+=t; 
            }
            
        }
    
    return fleet; 
    
    
    }
}; 