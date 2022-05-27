// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	bool isPrime(int n){
	    if(n<=1)return false;
	    if(n<=3)return true;
	    if (n % 2 == 0 || n % 3 == 0) return false;
	    for(int i=5;(i*i)<=n;i=i+6){
	        if((n%i==0)||(n%(i+2)==0))
	        return false;
	    }
	    
	    return true;
	}
   	vector<int> prime_pairs(int n){
   	    // Code here
   	    vector<int> v;
   	    for(int i=2;i<=(n);i++){
   	        if(isPrime(i)){
   	            for(int j=2;j<=(n);j++){
   	                if(isPrime(j)){
   	                    if(i*j <= n){
   	                        v.push_back(i);
   	                        v.push_back(j);
   	                    }
   	                }
   	            }
   	            
   	        }
   	    }
   	    return v;
    }    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.prime_pairs(n);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends
