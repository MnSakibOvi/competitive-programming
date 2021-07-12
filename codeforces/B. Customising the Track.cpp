
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int sum=0,n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }
       long long int mod=sum%n;

       cout<<mod*(n-mod)<<endl;
    }

}
