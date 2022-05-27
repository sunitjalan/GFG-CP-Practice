// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long gcd(long long A, long long B){
        if (B==0)
       return A;
      return gcd(B,A%B);  
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v;
        int a=gcd(A,B);
        v.push_back((A*B)/a);
        v.push_back(a);
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends
