class Solution {
public:
    vector<int> partitionLabels(string s) {
        
//          using the positions of letters as hint, we find...
        
        
        vector<int> alp(26,0);
        
        for(int i = 0 ; i < s.length(); i++){
            
            alp[s[i]-'a'] = i; // to keep track/store the last occurrence of char in a string             
        }
       
        int ind = INT_MIN; vector<int> ans; int li = 0; 
        
        for(int i = 0 ; i < s.length(); i++){
        
            ind = max(ind, alp[s[i]-'a']); // to check if index reached 
        
            if(i==ind){
                ans.push_back(i - li +1);
                li = i+1; // so that next time when we push, then we resume from this index... i.e difference,... 
                
            }
        
        }
        
        return ans;         
        
    }
};