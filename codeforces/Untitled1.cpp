#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a,b,c,a1,b1,ans =0;
    cin>>a>>b>>c;
    a1 = max(a,b);
    b1 = min(a,b);
    if(b1 == 1)
    {
        ans = a1 - b1;
        (ans <= c)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        return;
    }
    else
    {
        ans = ceil(a1 *1.0 / b1 *1.0)*1.0;
        ans = (ans - 1);
        (ans <= c)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        return;
    }
}


int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
}
