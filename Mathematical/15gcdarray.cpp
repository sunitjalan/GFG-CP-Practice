// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	int gcd_util(int a,int b){
	    if(b==0){
	        return a;
	    }
	    else return(gcd_util(b,(a%b)));
	}
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	if(N==1)return arr[0];
    	int temp=gcd_util(arr[0],arr[1]);
    	for(int i=2;i<=N-1;i++){
    	    temp=gcd_util(temp,arr[i]);
    	}
    	return temp;
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
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}  // } Driver Code Ends
