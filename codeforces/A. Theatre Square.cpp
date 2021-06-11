#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  unsigned long long n,m,a,c,d,f,g,h,total,flag,square,first,secound;
    cin>>n>>m>>a;
    if(n%a==0)
    {
        first=n;
    }
    else{
    c=n%a;
    d=a-c;
    first=n+d;
    }
        if(m%a==0)
    {
        secound=m;
    }
    else{
    f=m%a;
    g=a-f;
    secound=m+g;
    }
    total=first*secound;
    square=a*a;
    flag=total/square;
    cout<<flag;
    return 0;
}

