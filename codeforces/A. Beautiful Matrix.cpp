#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[6][6],i,j,a,b,f=0,g=0,sum;

    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {

            scanf("%d",&ara[i][j]);
        }
    }



    for(i=0; i<=4; i++)
    {
        for(j=0; j<=4; j++)
        {
            if(ara[i][j]==1)
            {
                f=i;
                g=j;
            }

        }
    }

    a=2-g;
    b=2-f;
    if(a<0)
    {
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }

    sum=a+b;
    cout<<sum;
}
