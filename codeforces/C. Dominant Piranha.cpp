

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,mx=INT_MIN,mn=INT_MAX,h,cnt=1,res;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==mx)
        {
            cnt++;
        }
        if(arr[i]>mx)
        {
            mx=arr[i];
            h=i+1;
            cnt=1;
        }


        mn=min(arr[i],mn);

    }
    if(mn==mx)
        cout<<"-1"<<endl;
    else if(cnt==1)
    {
        cout<<h<<endl;
    }
    else
    {


        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==mx && arr[i-1]!=mx && i-1>=0)
            {
                res=i+1;
                break;

            }
            if(arr[i]==mx && arr[i+1]!=mx && i+1<=n-1)
            {
                res=i+1;
                break;

            }

        }
        cout<<res<<endl;
    }




}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}



