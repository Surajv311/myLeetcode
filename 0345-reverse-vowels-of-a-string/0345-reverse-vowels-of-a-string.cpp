class Solution {
public:
    string reverseVowels(string x) {
        string a = x; 
        string v = "aeiouAEIOU";
        int s = 0; int e = a.length()-1;
        while(s<e){
            
            while(s<e and v.find(a[s])==string::npos) s++;
            while(s<e and v.find(a[e])==string::npos) e--;
            
            if(s<e) swap(a[s],a[e]);
            
            s++;e--;
            
            
        }
        return a; 
    }
};