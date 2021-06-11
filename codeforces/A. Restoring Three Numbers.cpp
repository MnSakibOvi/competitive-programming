#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,arr[4];
    for(int i=0;i<4;i++)\
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int j=0;j<3;j++)
    {
        int c=arr[3]-arr[j];
        cout<<c<<" ";
    }

}
