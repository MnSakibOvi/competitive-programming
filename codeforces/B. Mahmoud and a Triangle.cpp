

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
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int mn=INT_MAX,a,b,c,flag=0;
    for(int i=0; i<n-2; i++)
    {
        a=arr[i];
        b=arr[i+1];
        c=arr[i+2];
        if((a+b)>c && (a+c)>b && (b+c)>a)
        {

            flag=1;
            cout<<"YES"<<endl;
            break;
        }

    }
    //cout<<a<<b<<c;
    if(flag==0)

        cout<<"NO"<<endl;


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

