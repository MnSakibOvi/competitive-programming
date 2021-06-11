#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j;
    cin>>n;
    int arr[n];
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int q;
    cin>>q;


    for(int i=0; i<q; i++)
    {

        int m;
        cin>>m;
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]<=m)
            {
                cnt++;
            }
            if(arr[j]>m)
                break;
        }
        cout<<cnt<<endl;

    }

}
