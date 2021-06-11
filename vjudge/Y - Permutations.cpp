
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
	long long int a,cnt=0,sum=1;
	cin>>str>>a;
	string s=str;
	for(long long int i=1;i<=str.size();i++)
	{
		sum=sum*i;

	}
	long long int k=a%sum;
	while(k--)
	{
		next_permutation(str.begin(),
                           str.end());
                          //cout<<str<<endl;

	}

	cout<<str<<endl;



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

