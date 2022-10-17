class Solution {
public:
    
    void fun(int i, int j, string s, vector<string>& se){
        
        while(i>=0 and j<s.length() and s[i]==s[j]){
            se.push_back(s.substr(i,j-i+1));
            i--;j++; 
        }
        
    }
    
    
    
    int countSubstrings(string s) {
        
        if(s.length()==0) return 0; 
        vector<string> se; 
        for(int i = 0 ; i < s.length(); i++){
            fun(i,i,s, se);
            fun(i,i+1,s, se);
        }
        
        return se.size();
    }
};