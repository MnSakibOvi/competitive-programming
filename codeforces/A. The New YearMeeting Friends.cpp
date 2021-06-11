
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],sum=0,s,d,e,f;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+3);


    s=abs(arr[1]-arr[0]);

    d=abs(arr[1]-arr[2]);
    sum=s+d;
    cout<<sum;

}
