class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1) return stones[0]; 
        
        priority_queue<int> pq; 
        
        for(auto i:stones){
        pq.push(i);    
        }
        
        while(pq.size()!=1){
            
            int a = pq.top(); 
            pq.pop(); 
            int b = pq.top(); 
            pq.pop(); 
            
            int x = abs(a-b);
            
            pq.push(x);
    
        }
        
        return pq.top(); 
        
    }
};