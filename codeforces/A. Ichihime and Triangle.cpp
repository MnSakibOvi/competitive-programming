#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d,x,y,z;
    cin>>a>>b>>c>>d;


    x=max(a,b);
    y=max(b,c);
    z=min(c,d);

    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}


