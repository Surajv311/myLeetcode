// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        
        // considering largest subarray with 0 sum 
        
        unordered_map<int,int> mp; 
        int sum = 0 ; int r = 0; 
        
        mp[0] = -1; // initial for 0 sum ~ -1 
        
        for(int i = 0 ; i < N; i++){
            
            if(arr[i]==0)  arr[i] = -1; 
            
            sum+= arr[i]; 
            
            // if first n. 
            // if(sum==0) r = max(r,i);
        
            if(mp.find(sum)!=mp.end()) r = max(r,i-mp[sum]);
            
            else mp[sum] = i; 
            
            
        }
        
        return r; 
        
        
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends