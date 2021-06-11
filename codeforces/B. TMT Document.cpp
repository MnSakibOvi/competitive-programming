

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n;
    string str;
    cin>>str;
    int m=0,t=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='M')
            m++;
        else
            t++;
    }
    int mm=0,tt=0;
    int mm2=0,tt2=0;
    if(m*2==t)
    {
        int top=0,down=str.size()-1;

        for( top=0; top<str.size(); top++)

        {

            if(str[top]=='M')
                mm++;
            else
                tt++;

            if(mm>tt)
            {
                cout<< "NO"<<endl;
                return;
            }
        }
        for(; down>=0; down--)
        {


            if(str[down]=='M')
                mm2++;
            else
                tt2++;

            if(mm2>tt2)
            {
                cout<< "NO"<<endl;
                return;
            }
        }

        // cout<<mm<<" "<<tt<<"-- "<<mm2<<" "<<tt2<<endl;



        cout<< "YES"<<endl;

    }
    else
    {


        cout<<"NO"<<endl;
    }


}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
