#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a=max(n,m);
    int b=min(n,m);
    if(a%2==0)
    {
        int res1=(a/2)*b;
        cout<<res1<<endl;
    }
    else
    {

        int res1=(a/2)*b;
        int res2=(b/2);
        int res3=b -(res2*2);
        cout<<res1+res2+res3<<endl;
    }

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

