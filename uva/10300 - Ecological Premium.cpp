
#include <bits/stdc++.h>
using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long  double sum=0;
		long long int sum2=0;
		cin>>n;
		while(n--)
		{

			int s1,a1,e1;
		  long double vag,gun1,gun2,s,a,e;
			cin>>s1>>a1>>e1;
			s=s1;a=a1;e=e1;
			vag=s/a;
			gun1=vag*e;
			gun2=gun1*a;
			sum=sum+(gun2);



		}
		sum2=ceil(sum);
		cout<<sum2<<endl;

	}

}
