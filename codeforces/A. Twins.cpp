#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,sum2=0,c=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr, arr + n);
    int s=sum/2;

    for (int i = (n-1); i >=0; i--)
    {
        sum2=sum2+arr[i];
        c++;
        if(sum2>s)
            break;

    }
    cout<<c;
}
