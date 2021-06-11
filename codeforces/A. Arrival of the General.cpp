#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g=0;
    cin>>n;
    int arr[n],sm=100009,lg=-99,hs=0,hl=0,res;
    if(n==2)
    {
        g=1;
    }

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=sm)
        {
            sm=arr[i];
            hs=i;
        }
        if(arr[i]>lg)
        {
            lg=arr[i];
            hl=i;
        }

    }
//    if(g==1)
//        cout<<1;
    if(arr[0]==lg && arr[n-1]==sm)
        cout<<"0";
     else  if(g==1)
        cout<<1;
    else
    {


        int mx=hl;
        int mn=(n-1)-hs;
        if(hl==(hs-1) || hl<hs)
            res=mx+mn;
        else
            res=(mx+mn)-1;
        cout<<res;
    }
}
