#include<bits/stdc++.h>
using namespace std;
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
// #define gcd(a, b)            __gcd(a, b)
// #define lcm(a, b)            ((a)*((b)/gcd(a,b)))
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-9
double p,q,r,s,t,u;

double functions(double n)
{
    return p*exp(-n)+q*sin(n)+r*cos(n)+s*tan(n)+t*n*n+u;
}
double biset()
{
   double high=1, low=0;
   while(low+EPS <high)
   {
      double x = (low+high)/2;
      if(functions(low) * functions(x) <=0)
        high = x;
      else low = x;
   }
   return (low+high)/2;
}
int main()
{

    while(cin>>p>>q>>r>>s>>t>>u)
    {
       if(functions(0)*functions(1)>0)
        cout<<"No solution"<<endl;
       else
        cout<<dpoint(4)<<biset()<<endl;

    }

    return 0;
}
