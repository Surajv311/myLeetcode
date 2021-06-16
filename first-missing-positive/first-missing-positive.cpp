class Solution {
public:
    int firstMissingPositive(vector<int>& x) {
        
        int n = x.size(); 
         int i = 0 ; 
        
        while(i<n){
            if(x[i]>0 and x[i] <=n and x[i]!=x[x[i]-1]){
                // so putting in right position , say if 5 then put it in A[4]...
                swap(x[i],x[x[i]-1]);
            }
            else{
             i++;   
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            if(x[i]!=i+1){
                return i+1 ;
            }
        }
        
        return n+1 ; 
        
    }
};