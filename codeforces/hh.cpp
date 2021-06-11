
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b,m,cnt=0;
 cin>>a>>b>>m;
    for(int k=0; k<=m; k++)
    {
        int f=__gcd(a+k,b+k);
        cout<<a+k<<","<<b+k<<"->"<<f<<endl;
        if(f==1)
            cnt++;


    }
    cout<<"->"<<cnt<<endl;
}





