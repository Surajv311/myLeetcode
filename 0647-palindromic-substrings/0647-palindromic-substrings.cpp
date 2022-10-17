class Solution {
public:
    
    void fun(int i, int j, string s, vector<string>& vs){
        
        while(i>=0 and j<s.length() and s[i]==s[j]){
            vs.push_back(s.substr(i,j-i+1));
            i--;j++; 
        }
        
    }
    
    
    
    int countSubstrings(string s) {
        
        if(s.length()==0) return 0; 
        vector<string> vs; 
        for(int i = 0 ; i < s.length(); i++){
            fun(i,i,s, vs);
            
            // if(i<=s.length()-1)
            fun(i,i+1,s, vs);
        }
        
        return vs.size();
    }
};