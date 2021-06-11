#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int mn=9999999,s;
        for(i=0; i<n-1; i++)
        {
            s=abs(arr[i]-arr[i+1]);
          //  cout<<s<<endl;
            if(s<mn)
                mn=s;

        }
        cout<<mn<<endl;

    }
}
