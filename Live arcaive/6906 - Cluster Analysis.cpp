
#include <bits/stdc++.h>
using namespace std;
int main()
{

 int   t;
 cin>>t;
for(int j=1;j<=t;j++)
 {
     int n,k;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     int cnt=0;
     for(int i=1;i<n;i++)
     {

        if(arr[i]-arr[i-1]>k)
            cnt++;
     }
     cnt++;
       cout<<"Case #"<<j<<": "<<cnt<<endl;

 }
}


