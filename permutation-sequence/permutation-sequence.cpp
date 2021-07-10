class Solution {
public:
    string getPermutation(int n, int k) {
        
//         complexity of recursion is o(n!)..~finding sets.. and finding... exponential...
//         hence we optimise to o(n^2)
        
     int ft = 1; 
        vector<int> v; 
        for(int i = 1;i<n;i++) {
            ft = ft * i; // for factorial... 
            v.push_back(i); // stores 1,2,3,4....n
        }
        v.push_back(n); 
        string ans = ""; 
        k--; // decrementing, as 0 based indexing... like in josephus problem... 
        while(1) {
            // note that 'n' and 'k' is given in the question...
            ans = ans + to_string(v[k / ft]); // 16/6... 
            v.erase(v.begin() + k / ft); 
            
            if(v.size() == 0) break; 
            
            k = k % ft; 
            ft = ft / v.size();
        }
        return ans; 
        
        /*
        
say n = 4, you have {1, 2, 3, 4}

If you were to list out all the permutations you have

1 + (permutations of 2, 3, 4) - its total permutations possible is 3! = 6... 

2 + (permutations of 1, 3, 4) - ... 3! = 6 ... 

3 + (permutations of 1, 2, 4) -...6...

4 + (permutations of 1, 2, 3) -...6...
        
        */
        
        
    }
};