class Solution {
public:
    
    void fun(int open, int close, vector<string>& ans, string s){
        
        if(open==0 and close==0){
            ans.push_back(s); 
            return; 
        }
        
        if(open!=0){
            // string a = "("; 
            // s.append("(");
            // s+=a; 
            fun(open-1,close,ans,s+"(" ); 
        }
        
        // using if condition & not else if... 
        
        if(open<close){
            // string a = ")"; 
            // s+=a; 
            fun(open,close-1,ans,s+")" ); 
        }
        return; 
    }
    
    vector<string> generateParenthesis(int n) {
     int open, close; 
        open = close = n; 
        vector<string> ans; 
        fun(open,close, ans,"");   
        
        return ans; 
    }
};