
#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
int arr[n],mn=INT_MAX,a,b;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(i!=0)
    {
        int g=arr[i]+arr[i-1];
        if(g<mn || arr[i]<mn&& arr[i-1]<mn)
        {
            mn=g;
            a=arr[i];
            b=arr[i-1];
        }

    }

}
cout<<a<<" "<<b<<endl;
int f=max(a,b);
int h=min(arr[0],arr[n-1]);

  cout<<min(f,h)<<endl;
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

