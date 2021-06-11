#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,c=0,cnt=0,cnt2=0;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (j=0; j<n; j++)
    {
        if(arr[j]!=-1)
            c=c+arr[j];
        if(c>0 && arr[j]==-1)
        {
            c=c-1;
            cnt++;
        }
        if(c<0)
            c=0;
        if(arr[j]==-1)
            cnt2++;
    }
    cout<<cnt2-cnt;
}
