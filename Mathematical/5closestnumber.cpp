// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        if(N%M==0)return N;
        int t1=N+1;
        int t2=N-1;
        while(true){
            bool flagp=false;
            bool flagn=false;
            if(t1%M==0){
                flagp=true;
            }
            if(t2%M==0){
                flagn=true;
            }
            if(flagp && flagn){
                return((abs(t1)>abs(t2))? t1 : t2);
            }
            else if(flagp) return t1;
            else if(flagn) return t2;
            t1++;
            t2--;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends
