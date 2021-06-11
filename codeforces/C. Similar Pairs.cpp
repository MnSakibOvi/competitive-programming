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
    int n,x,cnt1=0,cnt2=0,cnts=0,flag1=0,flag2=0,k;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];

    }
    sort(v, v + n);

    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
            cnt2++;
        if(v[i]%2==1)
            cnt1++;
        if(v[i]-v[i-1]==1)
            cnts++;


    }
    // cout<<"cnts="<<cnts<<"cnt2="<<cnt2<<"cnt1="<<cnt1<<endl;
    int g=(cnt1/2)+(cnt2/2);
    if(g==n/2)
        cout<<"YES"<<endl;
    else
    {
        if(cnts>0)
        {
           g=g+1;
            if(g==n/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}





