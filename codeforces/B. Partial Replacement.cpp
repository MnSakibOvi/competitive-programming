


#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    string str;
    cin>>n>>k;
    cin>>str;
    cout<<str<<endl;
    int t=str.size()-1,d=0;
    int cnt=0,flag=0,flag2=0,cn1=0,cn2=0,dd=0,tt=0;
    while(t-d>k)
    {
        if(str[d]=='*')
        {
            flag=1;
            cnt++;



        }
        if(str[t]=='*')
        {
            flag2=1;
            cnt++;

        }
        if(flag==1)
        {
            //cout<<d<<" =d,";
            if(str[d]=='*')
            {
                dd=d;


            }
            cn1++;
            if(cn1==k)
            {

                cout<<dd<<" ";//kaj korena
                cn1=d-dd;
                cnt++;
            }
        }
        if(flag2==1)
        {
            // cout<<t<<"= t,";
            if(str[t]=='*')
            {
                tt=t;

            }
            cn2++;
            if(cn2==k)
            {

                cout<<tt<<" ";//kaj korenna

                cn1=tt-t;
                cnt++;
            }
        }

        d++;
        t--;
    }
    cout<<endl;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
}
