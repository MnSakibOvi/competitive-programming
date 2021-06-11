#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i;
    map<int ,int > mp;

  cin>>n>>m;
   int arrn[n+1],arrm[m+1],arrs[n+1];
  for( i=1;i<=n;i++)
  {
      cin>>arrn[i];
  }
   for( i=n;i>0;i--)
  {

      mp[arrn[i]] = 1;
      arrs[i]=mp.size();
      //cout<<arrs[i]<<" ";
  }
   for( i=1;i<=m;i++)
  {
      cin>>arrm[i];
      int x=arrm[i];
      cout<<arrs[x]<<endl;
  }


}

