
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        long sum=0;
        for(int i=0; i<n; i++)
        {
            int g=0,h=0;
            if(arr[i]>r)
                break;
            else if(arr[i]>= l)
            {
                g=arr[i];
            }
            else
            {
                g=l-arr[i];
            }
            if(g==arr[i])
                h=i+1;
            else
            {
                h=lower_bound(arr, arr+n, g) - arr;
            }
            if(h<i+1)
                h=i+1;
            cout<<arr[i]<<" g= "<<g<<" h ="<<h<<"--------->";




//
            int hh=0;
            if(arr[i]>=r)
            {
                break;
            }
            else
            {
                g=r-arr[i];
            }
            if(g==arr[i])
                hh=i+1;
            else
            {
                hh=upper_bound(arr, arr+n, g) - arr;
            }

            if(hh<i+1)
                hh=i+1;
            else if(h>n)
                hh=n;
            cout<<arr[i]<<" g= "<<g<<" h ="<<hh<<endl;

            if(hh>h)
                sum+=(hh-h);
        }
        cout<<sum<<endl;
    }

}
