#include<bits/stdc++.h>
using namespace std;
void solve()
{
  long long int arr[5],s,mod,sum=0;
    string n;
    for(int i=1;i<=4;i++)
        cin>>arr[i];
    cin>>n;

int product;
    for(int i = 0; i<n.length(); i++)
    {

    if(n[i]=='1')
        product=1;
      if(n[i]=='2')
        product=2;
          if(n[i]=='3')
        product=3;
          if(n[i]=='4')
        product=4;


       sum=sum+arr[product];

    }
    cout<<sum;



}
int main()
{

    solve();
}


