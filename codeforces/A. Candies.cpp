

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[2*n];
       int cnt=0;
       for(int i=0;i<n*2;i++)
       {
           cin>>arr[i];
           if(arr[i]%2==1)
            cnt++;
       }
       if(cnt==n)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
    }
}


