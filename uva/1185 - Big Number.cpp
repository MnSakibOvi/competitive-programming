
/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
double ans=0,x;
scanf("%lf",&x);
for(double i=x;i>1;i--)
    ans+=log10(i);
    printf("%0.0lf\n", floor(ans) + 1);


}
int main()
{


    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
    	solve();
    }
}



