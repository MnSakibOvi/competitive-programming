
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a,s,d,b,arr[10];
    cin>>n>>m>>a>>b;

   int div=n/m;
   int  mod=n%m;
    if(n%m==0)
    {
        s=n*a;
        d=div*b;


    }
    else
    {
        s=(div*b)+(mod*a);
        d=((div+1)*b);
    }
    if(s<d)
        arr[0]=s;
    else
        arr[0]=d;


cout<<s<<arr[0];

}
