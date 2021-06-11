#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int a,b,res,x,y;
       cin>>a>>b;
       if(a==b)
       {
           res=4*a*b;
           //cout<<res<<endl;
       }
       else
       {
           x=max(a,b);
           y=min(a,b);
           if(y*2>x)
            res=(y*2)*(y*2);
           else
            res=x*x;
       }
       cout<<res<<endl;
   }
}
