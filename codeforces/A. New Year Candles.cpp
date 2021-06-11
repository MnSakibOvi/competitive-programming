#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,d,m,sum=0,mod=0;
    cin>>a>>b;
    int s=a;
    while(1)
    {
        d=a/b;
        sum=sum+d;
        m=a%b;

        a=d+m;
        if(d==0)
            break;

    }
    int res=s+sum;
    cout<<res;


}
