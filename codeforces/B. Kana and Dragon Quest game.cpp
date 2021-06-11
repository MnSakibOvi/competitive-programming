#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,n,m;
    cin>>x>>n>>m;
    if(m*10>=x)
    {
        cout<<"YES"<<endl;

    }
    else
    {


        for(int i=1; i<=n; i++)
        {
            x=(x/2)+10;
        }
        // cout<<x<<endl;
        m=m*10;
        x=x-m;
        //cout<<x<<endl;
        if(x<=0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}


