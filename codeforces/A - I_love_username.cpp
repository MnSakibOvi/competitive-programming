
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int n,i,s=0,l=0,cnt=0;
 cin>>n;
 int arr[n];
 for( i=0;i<n;i++)
 {
    cin>>arr[i];
    if(i==0)
    {
    s=arr[0];
    l=arr[0];
    }
    if(arr[i]>s)
    {
        cnt++;
        s=arr[i];
    }
     if(arr[i]<l)
    {
        cnt++;
        l=arr[i];
    }


 }

 cout<<cnt;

}
