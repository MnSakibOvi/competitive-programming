
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,o;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
        cout<<"0";
    else
    {
        int sum=0;

        sort(arr, arr+n);
    int c=arr[n-1];

   // cout<<c;
     for (i=0;i<(n-1);i++)
    {
       o=c-arr[i];
       sum=sum+o;
    }
    cout<<sum;

    }

}
