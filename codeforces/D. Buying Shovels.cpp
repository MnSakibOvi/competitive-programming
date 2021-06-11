/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : tasin                      * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,limit=0,ans=0;
    cin>>n>>k;
    limit = sqrt(n * 1.0) + 1;
    ans = n;
    for(int i=1; i<=limit; i++)
    {

        if(n % i == 0)
        {
            if(i <= k)
                ans = min(ans , n / i);

            if(n / i <= k)
                ans = min(ans, i);
        }
    }
    cout<<ans<<endl;



}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int j;
    cin>>j;
    while(j--)
        solve();
}

