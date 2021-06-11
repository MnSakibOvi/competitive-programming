#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],arr2[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    sort(arr2, arr2+n);
    if(n==1)
        cout<<0;
   else if(arr2[0]==arr2[(n-1)])
        cout<<"0";
        else if(n==2)
            cout<<1;
    else
    {
        int c=arr[0];
        int cnt=0;
        int d=arr[0];
        for(j=1; j<n; j++)
        {
            if(arr[j]>c)
            {
                cnt++;
               /// cout<<arr[j]<<" ";
                c=arr[j];

            }
            if(arr[j]<d)
                d=arr[j];
        }
        if(d<arr[0])
            cout<<cnt+1;
        else cout<<cnt;
            //cout<<d;
    }
}
