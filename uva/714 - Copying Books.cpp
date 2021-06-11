
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,x,mx=INT_MIN;
    float sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mx=max(arr[i],mx);
    }
    x=ceil(sum/k);
    x=max(x,mx);
    cout<<"->"<<x<<endl;
  //  for(int i=n-1;i<)

}
int main()
{

  //  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
    int t;
   cin>>t;
   //  t=1;
    while(t--)
    {
    	solve();
    }
}



