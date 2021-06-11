#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,cnt=0,sum=0,a=0;
    cin>>m>>t;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
      sum=sum+arr[i];
      cnt++;
      if(sum>t)
      {
          sum=sum-arr[a];
          a++;
          if(cnt>0)
          cnt--;

      }
      // cout<<sum<<" ";
    }
 cout<<cnt<<endl;

}
