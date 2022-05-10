// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
int sum = 0 ; 

int r = 0; 

unordered_map<int,int> mp; 

        for(int i = 0 ; i < n ; i++){
            
            sum+=A[i]; 
            
            if(sum==0) r = max(r,i+1); // when say first n no.s directly give 0...
            
            if(mp.find(sum)==mp.end()) mp[sum] = i; // if that sum not in the map
            
            else r = max(r,i-mp[sum]);
            
        }
        
        return r; 
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends