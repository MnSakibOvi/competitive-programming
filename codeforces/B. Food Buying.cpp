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
int n,sum=0,s;
cin>>n;
int clon=n;
while(1)
{
    s=n/10;
    sum=sum+s;
   int k=n%10;
   n=s+k;
   if(s<=0)
    break;


}
cout<<sum+clon<<endl;




}

