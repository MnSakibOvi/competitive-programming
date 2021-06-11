

/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
bool digit(int a)
{
	int sum2=0;

	while(a>0)
	{
		sum2+=(a%10);
		a=a/10;
	}
	if(sum2==10)
		return 1;
	else
		return 0;


}
void solve()
{
	int n,sum=19;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		sum=sum+9;

		if(digit(sum)==0)
		{
			i--;
		}


	}
	cout<<sum<<endl;




}
int main()
{
    int t;
    //cin>>t;
  t=1;
    while(t--)
    {
    	solve();
    }
}

