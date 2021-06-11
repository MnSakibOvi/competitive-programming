
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,cnt=0,sum=0,sum2=0;
    cin>>n;

    for(int i=1; i>=1; i++)
    {
        sum=sum+i;

        sum2=sum2+sum;
        cnt++;


        if(sum2>=n)
        {
            break;
        }



    }
    if(sum2==n)
        cout<<cnt;
    else
        cout<<cnt-1;

}
int main()
{
    solve();
}
