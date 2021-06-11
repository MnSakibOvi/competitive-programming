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
  long long int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
 int low=(a-b)*n;
 int hig=(a+b)*n;

 int down=c-d;
 int up=c+d;
 if(hig<down || low > up )
    cout<<"No"<<endl;
 else
    cout<<"Yes"<<endl;




}
