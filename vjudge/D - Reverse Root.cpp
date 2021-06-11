

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	vector<long double>v;
long double x;
while(cin>>x)
{
	v.push_back(x);
	//cout<<setprecision(4)<<fixed<<sqrt(x)<<endl;
}
for(int i=v.size()-1;i>=0;i--)
{
	cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;
}
 return ;
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
      return 0;
}


