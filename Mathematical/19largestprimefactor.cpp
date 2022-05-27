// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    bool isPrime(long long int i){
        if(i==1)return false;
        if(i<=3)return true;
        if(i%2==0 || i%3==0)return false;
        for(int n=5;n*n<=i;n=n+6){
            if((i%n==0) || (i%(n+2)==0)){
                return false;
            }
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        for(long long int i=N;i>1;i--){
            if(isPrime(i)){
            if(N%i==0)
            return i;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
