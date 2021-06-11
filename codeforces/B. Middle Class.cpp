#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--)
   {
       int n,x,sum=0,cnt=0;
       cin>>n>>x;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr, arr + n, greater<int>());

       for(int i=0;i<n;i++)
       {

         if(arr[i]>=x)
         {
             sum=sum+(arr[i]-x);
                 cnt++;
         }
         else
         {
             int k=x-arr[i];
             sum=sum-k;
             if(sum>=0)
                cnt++;
         }
       }
       cout<<cnt<<endl;
   }
}
