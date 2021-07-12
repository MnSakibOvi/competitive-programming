
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
       long long int  sum=0,h=0,g=0,gg=0,hh=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>r)
                break;
            else
            {
                if(arr[i]<l)
                {
                    g=l-arr[i];
                    h= lower_bound(arr, arr+n, g) - arr;
                   // cout<<g<<"-> "<<arr[h-1]<<endl;
                    if(arr[h-1]<g)
                        h++;

                     // cout<<arr[i]<<" "<<i<<"  h ="<<h<<" = "<<arr[h-1]<<endl;

                    if(h<=(i+1))
                        h=(i+2);
                }
                else
                {
                    h=i+2;
                }
                if(h>n)
                    h=n;
              //  cout<<arr[i]<<" ->>"<<i<<"  h ="<<h<<" = "<<arr[h-1]<<endl;



                if(arr[i]<r)
                {
                    gg=r-arr[i];
                    hh= upper_bound(arr, arr+n, gg) - arr;
                    if(arr[h-1]>gg)
                        hh--;

                    //cout<<arr[i]<<" "<<i<<"  h ="<<hh<<" = "<<arr[hh-1]<<endl;

                    if(hh>n)
                        hh=n;
                }
              // cout<<arr[i]<<" "<<i<<"  hh ="<<hh<<" = "<<arr[hh-1]<<endl;
            }
            if(hh>h)
            {
                sum+=(hh-h);
                sum++;
            }
            else if(hh==h && hh!=i+1)
            {
                if(arr[h-1]+arr[i]>=l &&arr[h-1]+arr[i]<=r)
                    sum++;
            }
      //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }

}
