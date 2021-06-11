#include<bits/stdc++.h>
using namespace std;
void solve()
{
long long int n,k,cnt=0,sum=0,i;
cin>>n>>k;

cnt=(k-1);
sum=cnt*cnt;
//cout<<sum<<endl;
i=(2*cnt)-1;
long long int res=n-sum;
//cout<<i<<endl;
if(res>i && res%2==1)
{
    cout<<"YES"<<" "<<endl;
}
else
    cout<<"NO"<<endl;
//cout<<endl<<endl<<endl;


}


int main()
{

    int t;

cin>>t;
 //t=1;
    while(t--)
        solve();
}

