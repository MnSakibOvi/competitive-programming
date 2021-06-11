
/// *********************************************** T
/// O *                                           * A
/// O *    Solved By : mn_sakib_ovi(DIU)          * S
/// v *      Be Positive,be Happy.                * I
/// I *                                           * N
/// *********************************************** N
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n==1)
		cout<<8<<endl;
	else
	{
		int k=ceil(n/2.00);
		int m=n-k;


	for(int i=0;i<k;i++)
	{
		cout<<"9";
	}
	for(int i=0;i<m;i++)
	{
		cout<<"8";
	}

	cout<<endl;
	}

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

