
#include<bits/stdc++.h>
#include<string>
using namespace std;
int x;
//bool ck(int n)
//{
//   string str= to_string(n);
//   if(str.size()!=x)
//   {
//       int lol=x-str.size();
//       string sss;
//       while(lol--)
//       {
//          sss+='0';
//
//
//       }
//       str=sss+str;
//   }
//   int d=0,t=str.size()-1,sum1=0,sum2=0;
//   while(d<t)
//         {
//            int a,b;
//
//
//            a=str[d]-'0';
//             b=str[t]-'0';
//             sum1+=a;
//             sum2+=b;
//            // cout<<a<<b;
//             d++;
//             t--;
//         }
//         if(sum1==sum2)
//         return true;
//         else
//            return false;
//
//}
void solve()
{
int cnt=1;
cin>>x;
if(x%2==1)
x=x-1;
int m=x-1;
int h=pow(10,m);
int s=pow(10,x);
//cout<<h<<" "<<s<<endl;

//for(int i=1;i<s;i++)
//{
//    if(ck(i))
//    {
//       // cout<<i<<endl;
//
//        cnt++;
//    }
//
//}
if(x==2)
    cnt=10;
else if(x==4)
    cnt=670;
else if(x==6)
    cnt=55252;
else
    cnt=4816030;
cout<<cnt<<endl;



}
int main()
{

    int t;
// cin>>t;
    t=1;
    while(t--)
        solve();
}

