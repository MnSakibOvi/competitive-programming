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
	int n,m;
	cin>>n>>m;
	if(n==m)
		cout<<"0"<<endl;
	else if(m%n!=0)
		cout<<"-1"<<endl;
	else
	{
	 int s=m/n,cnt=0,flag=0;
	 while(s!=1)
	 {
	 	if(s%3==0)
			s=s/3;
		else if(s%2==0)
		s=s/2;
		else
		{
			flag=1;
			break;
		}
		cnt++;

	 }
	 if(flag==1)
		cout<<"-1"<<endl;
	 else
		cout<<cnt<<endl;
	}




}
int main()
{
    int t;
   // cin>>t;
    //t=1;

    	solve();

}

