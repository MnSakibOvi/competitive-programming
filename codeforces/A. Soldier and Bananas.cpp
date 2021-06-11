#include<bits/stdc++.h>
using namespace std;
int main()

{
    unsigned long long k,n,i,w,h=1,total=0,a;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        h=i*k;
        total=total+h;
    }
    if(total>n){
    a=total-n;
    cout<<a;
    }
    else
    {
        cout<<"0";
    }

}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,m,i;
//    cin>>n>>m;
//    for(i=1; n<=m;i++)
//    {
//        n = n3;
//        m = m2;
//    }
//    cout<<i-1;
//}
