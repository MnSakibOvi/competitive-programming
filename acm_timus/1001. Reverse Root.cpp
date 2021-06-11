
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
	long long int n,k;
	vector<long long int>v;
	while(cin>>n)
	{
		v.push_back(n);
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		long double ans=sqrt(v[i]);
		printf("%.4lf\n",sqrt(v[i]));
	}






}
int main()
{
	    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
  //  cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}




