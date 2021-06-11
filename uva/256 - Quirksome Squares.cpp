


/// ***********************************************T
/// O *                                           *A
/// O *    Solved By : mn_sakib_ovi(DIU)          *S
/// v *      Be Positive,be Happy.                *I
/// I *                                           *I
/// ***********************************************N
#include<bits/stdc++.h>
using namespace std;
double check(int a)
{
//	int h=a%10;
//	a=a/10;
//	int g=a%10;
//	int r=h+g;
int h,m,r;
if(a<100)
     h=1;
else if(a<=9999 && a>=1000)
	h=2;
else if(a<=999999 && a>=100000)
	h=3;
	else
		h=4;
		m=h;
	int sum1=0,sum2=0,gun=1;
	while(m--)
	{
	int s=a%10;
	s=s*gun;
	sum1=sum1+s;
	gun=gun*10;
	a=a/10;

	}
	m=h;
	gun=1;
	while(m--)
	{
	int s=a%10;
	s=s*gun;
	sum2=sum2+s;
	gun=gun*10;
	a=a/10;

	}
	r=sum1+sum2;


	return r;

}
void solve()
{
	vector<int>v2;

	vector<int>v4;

	vector<int>v6;

	vector<int>v8;

	for(int i=10;i<100;i++)
	{
		double k=sqrt(i);
		double res=check(i);
		if(k==res)
			v2.push_back(i);
	}
	for(int i=1000;i<9999;i++)
	{
		double k=sqrt(i);
		double res=check(i);
		if(k==res)
			v4.push_back(i);
	}
	for(int i=100000;i<999999;i++)
	{
		double k=sqrt(i);
		double res=check(i);
		if(k==res)
			v6.push_back(i);
	}
	for(int i=10000000;i<99999999;i++)
	{
		double k=sqrt(i);
		double res=check(i);
		if(k==res)
			v8.push_back(i);
	}
	int n;
	while(cin>>n)
	{
		if(n==2)
		{
			cout<<"00"<<endl<<"01"<<endl;
			for(int i=0;i<v2.size();i++)
				cout<<v2[i]<<endl;
		}
		if(n==4)
		{
			cout<<"0000"<<endl;
			cout<<"0001"<<endl;


			for(int i=0;i<v4.size();i++)
				cout<<v4[i]<<endl;
		}
		if(n==6)
		{
			cout<<"000000"<<endl;
			cout<<"000001"<<endl;
			cout<<"088209"<<endl;
			for(int i=0;i<v6.size();i++)
				cout<<v6[i]<<endl;
		}
		if(n==8)
		{
			cout<<"00000000"<<endl;
			cout<<"00000001"<<endl;
			cout<<"04941729"<<endl;
			cout<<"07441984"<<endl;
			for(int i=0;i<v8.size();i++)
				cout<<v8[i]<<endl;
		}
	}





}
int main()
{
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    int t;
 //   cin>>t;
	t=1;
    while(t--)
    {
    	solve();
    }
}



