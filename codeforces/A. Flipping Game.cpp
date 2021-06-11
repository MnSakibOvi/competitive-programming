#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnt0=0,cnt1=0,mx=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n==1 && arr[0]==1)
        cout<<"0";
    else  if(n==1 && arr[0]==0)
        cout<<"1";
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0);
            cnt0++;
            if(cnt0>mx)
                mx=cnt0;
            if(arr[i]==1)
            {
                cnt1++;
                cnt0=0;
            }
        }
        cout<<mx+cnt1-1<<endl;
    }

}
int main()
{


    solve();
}





