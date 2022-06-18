// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    
    int fun(vector<int> v, int n, int k, int pos){
        
        if(v.size()==1) return v[0]; 
        
        
        int index = (pos+k)%v.size();
        v.erase(v.begin() + index);
        
        return fun(v,n,k,index);
        
        
    }
    
    int josephus(int n, int k)
    {
       //Your code here
       
        vector<int> v; 
        
        for(int i = 0 ; i < n; i++) v.push_back(i);
        
        k--;
        
        return fun(v, n, k, 0)+1;
       
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends