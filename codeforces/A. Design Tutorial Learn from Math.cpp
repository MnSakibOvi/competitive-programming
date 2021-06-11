
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d,j,g=0,h=0;
    cin>>n;
    int s=(n/2);
    if(n%2==0)
     d=(n/2);
    else
        d=(n/2)+1;
   // cout<<s<<" first "<<d<<endl;
    for(int a=1; a<=s+1; a++)
    {
        for(int i=2,j=2; i<s,j<d; i++,j++)
        {
            if(s%i==0)
            {
                g=1;
               break;

            }
            if(d%j==0)
            {
                h=1;
               break;

            }


        }
        cout<<g<<" gh "<<h<<endl;
          if(g==1 && h==1)
        {
            cout<<s<<" "<<d;
            break;
                    }

    //cout<<s<<" "<<d<<endl;
        if(g==0 || h==0)
        {

            s=s-1;
            d=d+1;
             g=0;
            h=0;

        }


    }

}
