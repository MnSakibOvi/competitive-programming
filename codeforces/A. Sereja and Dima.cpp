#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sar=0,dim=0,pick;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    pick=0;
    for(int i=0;i<n;i++)
    {
        if(arr[l]>arr[r])
        {
            pick=arr[l];
            l=l+1;
        }
       else
        // if(arr[l]<arr[r])
        {
            pick=arr[r];
            r=r-1;
        }
     //  cout<<pick<<endl;
        if(i%2==0 || i==0)
            sar=sar+pick;
        else
            dim=dim+pick;
             //cout<<sar<<" "<<dim<<endl;

    }
  cout<<sar<<" "<<dim<<endl;

}


int main()
{

    int t;
    t=1;
    while(t--)
        solve();
}

