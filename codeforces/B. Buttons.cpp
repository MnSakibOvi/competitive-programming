#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    t=1;
    //cin>>t;
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
int n,sum=0,j=3,k;
cin>>n;
if(n==1)
    cout<<"1"<<endl;
else if(n==2)
    cout<<"3"<<endl;
else if(n==3)
    cout<<"7"<<endl;
else if(n==4)
    cout<<"14"<<endl;
    else
    {
      sum=n+((n-1)*2)+((n-2)*2);
      for(int i=n-3;i>=2;i--)
      {
          k=i*j;
          sum=sum+k;
          j++;
      }
      cout<<sum<<endl;
    }


}

