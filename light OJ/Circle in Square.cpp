
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
     cin>>t;

    double pi = 2.0 *acos(0.0);
    for(int i=1;i<=t;i++)
    {

        double n;
        cin>>n;
        double square=(2*n)*(2*n);
       // cout<<square<<endl;
       double circle=pi*(n*n);
       // cout<<circle<<endl;
        double ans=square-circle;
         printf("Case %d: %.2lf\n", i,ans);
    }

    return 0;
}
