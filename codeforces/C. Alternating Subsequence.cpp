
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long int n,cnt=0,cnt1=INT_MIN,res=0,flag=0;
    scanf("%lld", &n);
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);

    }
    if(arr[n-1]>0)
        arr[n]=-1;
    else
        arr[n]=2;

    long long int sum = arr[0],sum2=0, k=1,jh=0;

    for(int i=1; i<=n; i++)
    {
        if(arr[i] > 0 && arr[i-1] > 0)
        {
           if(arr[i]>sum)
            sum=arr[i];
        }
        else if(arr[i] < 0 && arr[i-1] <0)
        {
            if(arr[i]>sum)
            sum=arr[i];
        }
        else
        {
           sum2=sum2+sum;
           sum=arr[i];

        }

    }
    cout<<sum2<<endl;


}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
