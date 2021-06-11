#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,h;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        h=arr2[i]-arr[i];
      if(h>=2)
        c++;

    }
    cout<<c;
}
