#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0,sum2=0,b1,i;
    cin>>a>>b;
    int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
     b1=ara[b-1];
     if(b1==0)
        b1=1;
     for(i=0;i<a;i++)
    {
        sum2=sum2+ara[i];

     if(ara[i]>=b1)
         cnt++;
    }
    if(sum2==0)
        cout<<sum2;
        else
    cout<<cnt;
}
