#include<bits/stdc++.h>
using namespace std;
void solve()
{

int n,a,b,cnt=0;
cin>>n>>a>>b;
b=n-b;
//out<<b<<endl;
for(int i=1;i<=n;i++)
{
    if(i>a && i>=b)
    {


        cnt++;
    //cout<<i<<" ";
    }
}
cout<<cnt<<endl;

}
int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
