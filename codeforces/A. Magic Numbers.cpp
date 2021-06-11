

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
 string str;
 cin>>str;
 if(str[0]=='4')
	cout<<"NO"<<endl;
 else
 {

 int cnt=0,i;
 for( i=0;i<str.size();i++)
 {
 	if(str[i]=='4')
		cnt++;
	if(cnt>2)
	{
		cout<<"NO"<<endl;
		break;
	}
	if(str[i]!='1' && str[i]!='4')
	{
		cout<<"NO"<<endl;
		break;
	}
	if(str[i]!='4')
		cnt=0;
 }
 if(i==str.size())
	cout<<"YES"<<endl;
 }


}
int main()
{
    int t;

    t=1;
    while(t--)
    {
    	solve();
    }
}




