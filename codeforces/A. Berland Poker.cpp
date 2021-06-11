#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    //t=1;
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
    int n, m,k;
    cin>>n>>m>>k;
   int othr_peple=k-1;
    int card=n/k;
    if(card>m)
        cout<<m<<endl;
    else
    {
        int extra=m-card;

        int div=extra/othr_peple;;
        int res=card-div;
        if(extra%othr_peple!=0)
            res=res-1;
       // cout<<extra<<"ex "<<div<<"div "<<res<<endl;
       cout<<res<<endl;
    }

}

