#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    //scanf("%d", &t);
    t=1;
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
    long long int n,k,j=1,sum=0,rsum=99999999999999999,ind=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
         for(int i=1;i<=n;i++)
         {
             sum=sum+arr[i];
             if(i>=k)
             {
                 if(sum<rsum)
                 {
                     rsum=sum;
                     ind=i;
                 }
                // cout<<sum<<" ";
                 sum=sum-arr[j];
                 j++;

             }

         }
    int res=ind-(k-1);
    cout<<res<<endl;

}

