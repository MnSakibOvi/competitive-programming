



#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int cas=1;cas<=t;cas++)
{
  long long arr[10003],n,mod=10000007;
  for(int i=0;i<6;i++)
  {
      cin>>arr[i];
  }
  cin>>n;
  for(int i=6;i<=n;i++)
  {
      arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%mod;
  }
  cout<<"Case "<<cas<<": "<<arr[n]%mod<<endl;
}

    return 0;
}

