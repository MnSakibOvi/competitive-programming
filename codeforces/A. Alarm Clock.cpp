#include<bits/stdc++.h>
using namespace std;
void solve()
{
 long long int a,b,c,d;
cin>>a>>b>>c>>d;
if(a<=b)
    cout<<b<<endl;
else
{
   long long int exs=a-b;
 double ext=c-d;
   long long  int m=ext;
    if(ext<=0)
        cout<<"-1"<<endl;
    else
    {
      long long   int s=ceil(exs/ext);
        long long int res=b+(s*c);
        cout<<res<<endl;
    }


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

