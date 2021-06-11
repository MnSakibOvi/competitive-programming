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
int n,mn=INT_MAX,pick,s;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<n-1;i++)
{
    mn=INT_MAX;

    pick=0;
    for(int j=i;j<n;j++)
    {
        if(arr[j]<mn)
        {
            mn=arr[j];
            pick=j;
        }
       // cout<<pick<<" ";
    }
    //swap(arr[i],arr[pick]);
    s=arr[i];
    arr[i]=arr[pick];
    arr[pick]=s;
//    cout<<endl;
//    cout<<"elemnt ="<<arr[i]<<endl;
}
for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";

}

