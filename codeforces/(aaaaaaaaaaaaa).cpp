#include <bits/stdc++.h>
using namespace std;


double cubicRoot(double n)
{

    double start = 0, end = n,error=0,i=0;
    double e = 0.0000001;
    while (1)
    {
        double mid = (start + end)/2;
        if (n > (mid*mid*mid))
           error = (n-(mid*mid*mid));
        else
            error = ((mid*mid*mid) - n);
        if (error <= e)
            return mid;
        if ((mid*mid*mid) > n)
            end = mid;
        else
            start = mid;
    }
}
int main()
{
    double n;
    cin>>n;
    printf("Cubic root of %.3lf is %.3lf\n",n,cubicRoot(n));
    return 0;
}
