#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=1,d=0,e=1,f=0,i;
    cin>>a>>b;
    for(i=1; i<=100; i++)
    {
        c=a*3;

        e=b*2;

        if(c>e)
        {
            break;
        }
        a=c;
        b=e;

    }

    cout<<i;


}
