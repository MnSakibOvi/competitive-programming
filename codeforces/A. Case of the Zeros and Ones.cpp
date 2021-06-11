#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    int n,zero=0,one=0;
    cin>>n>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
            zero++;
        if(str[i]=='1')
            one++;

    }
 int mn=min(zero,one);
 int ans=n-(mn*2);
 cout<<ans<<endl;
}
int main()
{


    solve();
}


