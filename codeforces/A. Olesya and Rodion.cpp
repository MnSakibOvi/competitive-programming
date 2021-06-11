#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long int n,t,i,m=1,j;
    cin>>n>>t;
    int arr[n];
    if(n*10==t)
    {
        cout<<"-1";
    }
    else
    {
        arr[0]=t;
        cout<<arr[0];

        if(t==10)
            n=n-1;
            for( i=1; i<n; i++)
            {
                arr[i]=0;
              cout<<arr[i];

            }

    }



}
int main()
{

    solve();
}

