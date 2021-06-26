

#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int res1=(a+b)*2;
int res2=a+b+c;
int res3=(min(a,b)+c)*2;

//cout<<res1<<" "<<res2<<" "<<res3<<endl;
int mn=min(res1,res2);
mn=min(res3,mn);
cout<<mn<<endl;


}

