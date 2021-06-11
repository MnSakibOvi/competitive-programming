
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int res=s/n;
        if(res<=a)
        {


           int ex=s-(res*n);
           if(ex<=b)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

        }
        else
        {
            int mul=s-(a*n);
            if(mul<=b)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
    }

}
