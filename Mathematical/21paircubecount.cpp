// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        int count =0;
        int j=0;
        for(int i=1;i<=(cbrt(N));i++){
            if(pow(i,3)==N){
                count++;
            }
            else if( (pow(i,3)+pow((int)(cbrt(N-pow(i,3))),3)) == N ){
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
