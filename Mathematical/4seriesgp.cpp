// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	using ll  = unsigned long long int ;
	ll powm(ll x,ll n,ll M){
		    ll result=1;
		    while(n>0)
		    {
		        if(n % 2 ==1)
		            result=(result * x)%M;
		        x=(x*x)%M;
		        n=n/2;
		    }
		    return result;
	}
   	int Nth_term(int a, int r, int n){
   		ll mod = 1e9 + 7;
   		ll res = powm(r, n-1, mod);
   		res *= a;
   		res %= mod;
   		return int(res);
   	}   
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, r, n;
		cin >> a >> r >> n;
		Solution ob;
		int ans = ob.Nth_term(a, r, n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
