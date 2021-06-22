
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
   ll n,x,i,j,t,l,res;

        cin>>n>>x>>t;

       ll a=t/x;

        if(n<=a)
        {
            res=n*(n-1)/2;

        }
        else
        {
            res=n*a-(a*(a+1))/2;
            cout<<res<<endl;
        }
}

}
