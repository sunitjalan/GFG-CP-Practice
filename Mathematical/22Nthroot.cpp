// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    long long int start1 =1,end1=m;
	    while( start1 <= end1 ){
	        long long int mid1 = (start1 + end1 )/2;
	        if(pow(mid1,n)==m){
	            return mid1;
	        }
	        else if(pow(mid1,n)<m){
	            start1=mid1+1;
	        }
	        else{
	            end1=mid1-1;
	        }
	    }
	    return -1;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends
