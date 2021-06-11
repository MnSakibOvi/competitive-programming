#include<bits/stdc++.h>
using namespace std;

int main()
{
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n)
    {
        int k=n,sum=0,sum2=0,d2,m2,d,m;
        for(int i=0;n/3!=0;i++)
        {
            d=n/3;
            sum=sum+d;
            m=n%3;
            n=d+m;

        }
        //cout<<k+sum<<endl;
        n=k+1;
        for(int i=0;n/3!=0;i++)
        {
            d2=n/3;
            sum2=sum2+d2;
            m2=n%3;
            n=d2+m2;

        }
     if(d2>=1)
            cout<<k+sum2<<endl;
    else
         cout<<k+sum<<endl;


    }



}
