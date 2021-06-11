#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long int a,b,x,y,n,res1,res2,ans,ans2,res3,a1,b1,n1;
  cin>>a>>b>>x>>y>>n;

a1=a;
b1=b;
n1=n;
ans=a-(min(n,a-x));
n=n-(min(n,a-x));
ans2=b-(min(n,b-y));
res1=ans*ans2;
n=n1;
ans2=b-(min(n,b-y));
n=n-(min(n,b-y));
ans=a-(min(n,a-x));
res2=ans*ans2;
res3=min(res1,res2);
//cout<<"res1 = "<<res1<<"res2 = "<<res2<<"res5 = "<<res5<<"res6 = "<<res6<<endl;
        cout<<res3<<endl;
      //  }









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
