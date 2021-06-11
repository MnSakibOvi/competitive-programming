
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n;
    int arr[n];
    int arr3[n];
    arr3[0]=0;
    for(int i=1; i<=n; i++)
    {

        cin>>arr[i];
        arr3[i]=arr[i]+arr3[i-1];
      // cout<<arr3[i]<<" ";
    }

    cin>>m;
    int arr2[m];
    for(int i=0; i<m ; i++)
        cin>>arr2[i];



    int j=0;
    int low=0,up=m-1;
    for(int i=0; j<m,low<=up; i++)
    {
        int d=(low+up)/2;

        if(arr2[j]<=arr3[d] && arr2[j]>arr3[d-1])
        {
           // cout<<i<<endl;
            i=-1;
            j++;
            low=0;
            up=m-1;
        }
        if(arr2[j]<arr3[d] && arr2[j]<arr3[d-1])
            up=d-1;
         if(arr2[j]>arr3[d] && arr2[j]>arr3[d-1])
            low=d+1;
           cout<<up<<" "<<low<<endl;

    }



}
int main()
{


    solve();
}

