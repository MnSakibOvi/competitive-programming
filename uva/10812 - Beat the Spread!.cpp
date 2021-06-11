#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
cin>>t;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
  int a,b;
  cin>>a>>b;
  int s =((a+b)/2);
  int k=(a-b)/2;
 if(s<0 || k<0)
    cout<<"impossible"<<endl;
else
{
    if((s*2)==(a+b) && (k*2)==(a-b))
        cout<<s<<" "<<k<<endl;
    else
        cout<<"impossible"<<endl;
}
}

