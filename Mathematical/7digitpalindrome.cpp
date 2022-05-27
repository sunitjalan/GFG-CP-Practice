// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int temp=N,d=0,s=0;
        while(temp!=0){
            d+=(temp%10);
            temp/=10;
        }
        temp=d;
        while(temp!=0){
            s=(10*s)+(temp%10);
            temp/=10;
        }
        if(s==d)return 1;
        else return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends
