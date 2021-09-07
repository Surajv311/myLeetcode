class Solution {
public:
    int countPrimes(int n) {
     
        /*
//          we use prime sieve . 
         vector<int> sieve(n, 1);
        sieve[0] = sieve[1] = 0;
        
//         taking square root...(n)...
        for (int i = 0; i < sqrt(n); i++) {
            if (sieve[i]) {
                for (int j = i*i; j < n; j += i) {
                    sieve[j] = 0;
                }    
            }    
        }
        
        return count(sieve.begin(), sieve.end(), 1)
     
     */
        
        
        vector<bool> sieve(n+1,true);
        sieve[0] = false;        
        sieve[1] = false;
        int ans = 0;
//         not using sqrt()...
        for(int i=2;i*i<=n;i++)
        {
            if(sieve[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    sieve[j] = false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(sieve[i])
            {
                ans++;
            }
        }
        return ans;
     
    }
};