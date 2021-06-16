
#include<bits/stdc++.h>
using namespace std;


double range(double mid,double x,double y)
{
    double la=sqrt((x*x)-(mid*mid));
    double ra=sqrt((y*y)-(mid*mid));
    return (la*ra)/(la+ra);
}

int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {

       double x,y,c,mid;
        cin>>x>>y>>c;
        double low=0,high=max(x,y);
        while(high-low>1e-10)
        {
             mid=low+(high-low)/2.0;
            double d=range(mid,x,y);
            if(d>c)
                low=mid;
            else
                high=mid;
        }
      printf("Case %d: %0.10lf\n",cas,mid);

    }

	return 0;
}
