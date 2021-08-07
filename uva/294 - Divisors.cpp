//
//
//
#include<bits/stdc++.h>
using namespace std;
//vector<int>v;
//int check(int n)
//{
//    int cnt=0,h=n;
//    for(int i=1;i*i<=n;i++)
//    {
//
//        if(n%i==0)
//        {
//
//            if(n/i==i)
//                cnt++;
//            else
//                cnt+=2;
//
//
//
//
//
//        }
//
//    }
//    return cnt;
//}
//void solve()
//{
//
//int a,b;
//cin>>a>>b;
//int mx=INT_MIN,res=a;
//for(int i=a;i<=b;i++)
//{
//    int g=check(i);
//  // cout<<"          ->"<<i<<" "<<g<<endl;
//    if(g>mx)
//    {
//        swap(mx,g);
//        res=i;
//
//    }
//
//
//}
//
//cout<<"Between "<<a<<" and "<<b<<", "<<res<<" has a maximum of "<<mx<<" divisors."<<endl;
//}
int main()
{
    int t;
    cin>>t;
//    t=1;
    while(t--)
    {
        int n;
        cin>>n;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                int cnt=0;
                while(n%i==0)
                    cnt++,n/=i;
                cout<<i<<"^"<<cnt<<endl;
            }
        }
        if(n>1)
            cout<<n<<"^"<<1<<endl;
    }

}


