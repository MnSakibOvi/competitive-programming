

#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n,mx=INT_MIN,res;
double m;
cin>>n>>m;
int arr[n];

for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      int g=ceil(arr[i]/m);
      if(g>=mx)
      {
         mx=g;
          res=i+1;
      }
  }

  cout<<res<<endl;
}
int main()
{
    int t;
   // cin>>t;
   t=1;
    while(t--)
    {
    	solve();
    }
}



