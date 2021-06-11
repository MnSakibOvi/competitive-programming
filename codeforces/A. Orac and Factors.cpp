#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;

int m;
if(n%2==0)
    m=2;
else
{
    int flag=1;
    for(int i=3;i<=n/2;i++)
    {
        if(n%i==0)
        {
            m=i;
            flag=0;
            break;
        }
    }
    if(flag==1)
    m=n;
}
int res=(k-1)*2;
cout<<m+n+res<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

