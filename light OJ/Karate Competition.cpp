

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+n);
    int cnt=0,k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[k])
        {
            cnt++;
            cnt++;
            k++;
        }
        else if(arr[i]==arr[k])
        {
            if(arr[i+1]>arr[k+1])
        }
    }

}
int main()
{
    int t;
    cin>>t;
// t=1;
    while(t--)
    {
        solve();
    }
}



