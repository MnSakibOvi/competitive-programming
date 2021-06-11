
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,cnt=0,j;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }
    int s=min(m,n);

    int r=max(m,n);
    sort(arr, arr+n);

    sort(arr2, arr2+m);
    for(int k=0; k<n; k++)
    {
        for( j=0; j<m; j++)
        {
            int dif=abs(arr[k]-arr2[j]);
            if(dif==0 || dif==1)
            {
                cnt++;
                arr2[j]=-5;
                break;
            }
        }
    }
    cout<<cnt;


}
