class Solution {
public:
    
    bool isValid(string s) {
//          unordered map defined...
        
            unordered_map<char, int> ump {
        {'(', 1}, {'{', 2}, {'[', 3}, 
        {')', -1}, {'}', -2}, {']', -3}                       
    };
        
        stack<char> st; 
        
        for(int i = 0 ; i < s.length(); i++){
        
            if(ump[s[i]]>0){
                st.push(s[i]);
            }
            
            else{
                
                if(st.empty()) return false; 
                int x = ump[st.top()]; st.pop(); 
                
                // since x is already +ve & ump[s[i]] is -ve... hence we add... not not subtract... i.e it would lead to: +ve - (-ve) ~ +ve.... hence just add...
                if(abs(x+ump[s[i]])==0) continue; 
                else return false; 
            }

        }

        if(st.empty()) return true; 
        
        return false; 
    }
};