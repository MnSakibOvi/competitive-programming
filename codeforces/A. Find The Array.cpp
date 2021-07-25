
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    int cnt=0,c=1;
    cin>>n;
    while((n-c)>0)
    {
        n=n-c;
        c+=2;
        cnt++;
    }
    if(n!=0)
        cnt++;
    cout<<cnt<<endl;

}

}


