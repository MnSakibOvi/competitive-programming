


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,mx=INT_MIN,sum=0,sum2=0;
    cin>>n;
    int arr[n],arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];

    }



 int mn=INT_MAX;

    for(int i=0; i<n; i++)
    {
        sum-=arr[i];
        mx=max(sum,sum2);
        if(mx<mn)
            swap(mn,mx);

        sum2+=arr2[i];




    }
    cout<<mn<<endl;




}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
