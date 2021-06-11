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

	string str;
	int l=1,sum=0;
	cin.ignore();
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='R')// L R L L L R L L L L
		{
			l=1;
		}
		else
			l++;
		sum=max(sum,l);

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

