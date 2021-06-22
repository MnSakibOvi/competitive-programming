



#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{

    int t, r1, r2, h, p;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
           double pi=2.0*acos(0.0),r3,res;
         cin>>r1>>r2>>h>>p;
        r3 = p/(h * 1.0) * (r1 - r2)  + r2;
        res=(pi / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2));
        printf("Case %d: %.10lf\n", i, res);
    }
    return 0;
}
