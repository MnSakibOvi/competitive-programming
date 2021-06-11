#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
cin>>t;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
  long long int n,m,j=1;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=1;i<m;i++)
        {
            reverse(arr+j,arr+n);
            j++;
        }

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";

            cout<<endl;

}


