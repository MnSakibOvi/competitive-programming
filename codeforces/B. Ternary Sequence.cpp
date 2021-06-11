

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
	int z1,o1,t1,z2,o2,t2;
	cin>>z1>>o1>>t1>>z2>>o2>>t2;
	int sum=0;
	if(t1>0)
	{
		int s=min(t1,o2);
		t1-=s;
		o2-=s;
		sum=sum+(2*s);

	}
	int s=t1+z1;
	//cout<<sum<<endl;
	if(t2>(s) )
	{
		s=t2-s;

		sum=sum-(2*s);


	}

	cout<<sum<<endl;





}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
    	solve();
    }
}





