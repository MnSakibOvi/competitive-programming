#include<bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned long long n,sum=0,i,cel;
    int mv;
    cin>>n;
    mv=n/2;
    //cout<<mv;
    for(i=n;i>=3;i=i-2)
    {
        cel=i*2+((i*2)-4);
        sum=sum+(cel*mv);
        mv--;
          //cout<<sum<<endl;
    }
  cout<<sum<<endl;


}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}


