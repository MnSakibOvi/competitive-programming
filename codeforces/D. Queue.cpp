

#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
int sum=0,cnt=0;
for(int i=0;i<n;i++)
{
    ///cout<<arr[i]<<" ";
    if(sum<=arr[i])
    {


        cnt++;
    sum=sum+arr[i];
    }
}
//cout<<endl;
  cout<<cnt<<endl;
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



