#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
 t=1;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
  long long int n,sum=0,s,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]+1==arr[i])
        {
             arr[i+1]=arr[i];
             flag=1;
        }
       // arr[i+1]=arr[i];
        int s=abs(arr[i]-arr[i+1]);
       // cout<<s;

           //  cout<<s;
        sum=sum+s;

    }
    sum=sum+arr[0]+arr[n-1];
    if(flag==1)
        sum=sum+1;
    cout<<sum<<endl;


}

