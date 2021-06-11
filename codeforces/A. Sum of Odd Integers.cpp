#include<bits/stdc++.h>
using namespace std;
void solve()
{
long long int n,k,cnt=0,sum=0,i;
cin>>n>>k;

for( i=1;cnt<k-1;i=i+2)
{
    sum=sum+i;
    //cout<<i<<" "<<sum<<endl ;
    ++cnt;
//    if(cnt==k)
//        break;

}

long long int res=n-sum;
if(res>=i && res%2==1)
{
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;
//cout<<endl<<endl<<endl;


}


int main()
{

    int t;

 // cin>>t;
 t=1;
    while(t--)
        solve();
}

