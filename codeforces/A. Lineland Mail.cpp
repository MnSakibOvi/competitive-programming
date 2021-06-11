
/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,kr,kl,mr,ml;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i==(n-1))
            kr=INT_MAX;
        else
            kr=abs(arr[i]-arr[i+1]);
        if(i==0)
            kl=INT_MAX;
        else
            kl=abs(arr[i]-arr[i-1]);

        cout<<min(kr,kl)<<" ";
        ml=abs(arr[i]-arr[0]);
        mr=abs(arr[i]-arr[n-1]);
        cout<<max(ml,mr)<<endl;




    }

}
int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}

