// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}
// } Driver Code Ends

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
    int denx=(den1*den2)/gcd(den1,den2);
    int numx=num1*(denx/den1) + num2*(denx/den2);
    int flag=true;
    int m=(numx<denx)? numx : denx;
    while(flag){
        flag=false;
        for(int i=2;i<=m;i++){
            if(numx%i==0 && denx%i==0){
                flag=true;
                numx/=i;
                denx/=i;
            }
        }
    }
    cout<<numx<<"/"<<denx<<endl;
 }
