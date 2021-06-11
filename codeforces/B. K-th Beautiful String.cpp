#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,cnt=0,sum=0,i=1,fact,b1,b2;
cin>>n>>k;
while(true)
{
    sum=sum+i;
    cnt++;
    i++;
    if(sum>k)
        break;
        fact=sum;
}
//cout<<"cnt="<<cnt-1<<"fact="<<fact<<endl;
cnt=cnt-2;
if(fact==k)
{
    b1=n-cnt;
    b2=n-(cnt+1);

}
else
{
    b1=n-(cnt+2);
    b2=(n-(k-fact))+1;
}
//cout<<"b1="<<b1<<"b2="<<b2<<endl;
for(int i=1;i<=n;i++)
{
    if(i==b1 || i==b2)
        cout<<"b";
    else
        cout<<"a";
}
cout<<endl;


}
int main()
{
    int t;
    cin>>t;
    // t=1;
    while(t--)
    {
        solve();
    }
}

