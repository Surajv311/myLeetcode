class Solution {
public:
    bool rotateString(string s, string goal) {
        

        if(s=="" or goal == "") return false;
        if(s.length()!=goal.length()) return false; 
        
        
        s = s+s; 
        
        if(s.find(goal) != std::string::npos) return true; 
        else return false;         
        
    }
};