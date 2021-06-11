#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
     cin>>n>>m;
     int s=min(n,m);
     int z=max(n,m);
     if(s*2<=z)
     {
         cout<<s<<" "<<s*2<<endl;
     }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}

