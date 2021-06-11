
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,s=0,i;
  cin>>n>>m;
  int arr[n];
  for(int i=1;i<n;i++)
  {
      cin>>arr[i];
  }

  for( i=1;i<=n; i+=arr[i])
  {

      if(i==m)
      {
          cout<<"YES";
          s=1;
          break;
      }


  }
  if(s==0)
    cout<<"NO";

}
