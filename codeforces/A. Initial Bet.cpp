#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t,sum=0;
  for(int i=0;i<5;i++)
  {
      cin>>t;
      sum=sum+t;
  }
  if(sum==0)
    cout<<"-1"<<endl;
 else if(sum%5==0)
  cout<<sum/5<<endl;
  else
    cout<<"-1"<<endl;

    return 0;
}

