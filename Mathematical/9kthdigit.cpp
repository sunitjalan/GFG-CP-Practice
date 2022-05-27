// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long long int p= pow(A,B);
        int r;
        for(int i=1;i<=K;i++){
            r=p%10;
            p/=10;
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
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends
