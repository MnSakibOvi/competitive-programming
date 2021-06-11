#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t;
 cin>>t;
 for(int i=1;i<=t;i++)
    {
       long long int x,y,k;

        cin>>x>>y>>k;
        int s=k%x;
        if(s==y)
        {
            cout<<k<<endl;
        }
        else if(s>y)
        {
            int z=s-y;
            cout<<k-z<<endl;
        }
        else
        {
            int z=x+s;
            int l=z-y;
            cout<<k-l<<endl;


        }
    }

}
