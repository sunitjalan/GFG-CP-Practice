// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int isPrime(int N){
        if(N==1)return 0;
        if(N==2 || N==3) return 1;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i ==0)return 0;
        }
        return 1;
    }
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> v;
        if(N<=1) return v;
        for(int i=2;i<=N;i++){
            if(isPrime(i)) v.push_back(i);
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
