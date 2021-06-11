#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,extra;
    cin>>a>>b;
    if(a==0 || b==0)
        cout<<"0"<<endl;


    else
    {
        int s=(max(a,b));
        int m=(min(a,b));
        int f1=s/2;
       int f2=m-f1;
       if(s%2!=0)
        extra=1;
       else
        extra=0;
        cout<<"f1"<<f1<<" f2"<<f2<<endl;
       int last=ceil(f2/2.00);
       cout<<"last="<<last<<endl;
      int last1=last-extra;
       cout<<"las1t="<<last1<<endl;
       int res=(f1-(last1/2));
       cout<<"res="<<res<<endl;
       int ans=res+last;
       cout<<ans<<endl;
    }
}
int main()
{

int t;
cin>>t;
while(t--)
    solve();
}


