// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    
    int ar, x; 
    int i = 0 ; int j = len-1;

    if(i==j) return 0; 
    
    int ans = INT_MIN; 
    while(i<j){
        
        x = min(A[i],A[j]);
        
        ar = (j-i)*(x);
        
        ans = max(ans,ar);
   
        if(A[i]>A[j]) j--;
        
        else if(A[i]<A[j]) i++; 
        
        else{
            i++; j--; 
        }
        
    }
    
    return ans; 
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends