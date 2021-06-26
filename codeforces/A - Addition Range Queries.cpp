#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,k,mx=INT_MIN,mn=INT_MAX;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
        mx=max(arr[i],mx);
        mn=min(arr[i],mn);
     }
     cout<<mx-mn<<endl;
 }
}
