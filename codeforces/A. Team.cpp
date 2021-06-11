#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,j,sum1,sum2=0;cin>>n;

    for(i=0;i<n;i++)
    {
        sum1=0;
        for(j=0;j<3;j++)
        {
        cin>>m;
        sum1=sum1+m;
        }
        if(sum1>1)
        {
            sum2=sum2+1;
        }
    }
    cout<<sum2;

}
