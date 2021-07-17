class Solution {
public:
    string minWindow(string s, string t) {
        
        vector<int> hsh(256,0);
        int words = 0 ; 
        for(int i = 0 ; i < t.length();i++)
        {
            if(hsh[t[i]]==0) words++;
            
            hsh[t[i]]++;
        }
        
        int start = 0 , end = INT_MAX; 
        int i = 0 , j = 0 ; 
        
        while(j<s.length()){
            
            hsh[s[j]]--;
            
            if(hsh[s[j]]==0) words--;       
            
            if(words==0){
                
                while(words==0){
                    
                    if(end>j-i+1)
                    {
                        end = j-i+1;
                        start = i;
                    }
                    hsh[s[i]]++;
                    
                    if(hsh[s[i]]>0) words++;
                    
                    i++;                    
                }

            }
            
            j++;
       
        }
        
        if(end==INT_MAX) return "";
        return s.substr(start,end);
        
    }
};