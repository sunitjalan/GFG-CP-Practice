// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
    int temp=n;
    while(temp!=0){
        int t2=n;
        while(t2!=0){
            for(int i=0;i<temp;i++){
                cout<<t2<<" ";
            }
            t2--;
        }
        temp--;
        cout<<"$";
    }
}
