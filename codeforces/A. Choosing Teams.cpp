

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n);
    for(int i=0;i<n;i++)
    {
        if(5-arr[i]>=k)
            cnt++;
            else
                break;

    }
    cout<<cnt/3;

}
