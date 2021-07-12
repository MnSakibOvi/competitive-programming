#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,mx,mn,dif,m1,m2;
        cin>>a>>b;
        if(a==b)
            cout<<"0 0"<<endl;
        else
        {
            mx=max(a,b);
            mn=min(a,b);
            dif=mx-mn;
            m1=mx%dif;
            m2=dif-m1;
            cout<<dif<<" "<<min(m1,m2)<<endl;

        }
    }

}
