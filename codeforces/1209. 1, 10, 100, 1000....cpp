#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long	int sum=1;
    map<long long int,int>mp;
    for(int i=1; i<=99999; i++)
    {
        mp[sum]++;
        sum+=i;


    }


    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>k;
        if(mp[k]==1)
            arr[i]=1;
        else
            arr[i]=0;
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;





}
int main()
{
    int t;
    //  cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}





