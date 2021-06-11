#include<bits/stdc++.h>
#include <sstream>
using namespace std;
int typasting(string sti)
{
    int c;
    stringstream ss;
    ss<<sti;
    ss>>c;
    return c;

}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    long long int ss=0;
    long double km=0,speed=0,sum=0,ans=0;

    string str;
    int t=0;
    cin.ignore();
    while(getline(cin,str))
    {
        t++;
        int flag=0;
        int i;
        string st;
        for( i=0; i<str.size(); i++)
        {
            if(str[i]==':')
                break;
            st=st+str[i];

        }
        int  h=typasting(st);
        // cout<<"H = "<<h<<endl;
        int     k=i+1;
        string stt;
        for( i=k; i<str.size(); i++)
        {
            if(str[i]==':')
                break;
            stt=stt+str[i];

        }
        int m=typasting(stt);
        // cout<<"M = "<<m<<endl;
        k=i+1;
        string sttt;
        for( i=k; i<str.size(); i++)
        {

            if(str[i]==' ')
                break;
            sttt=sttt+str[i];

        }
        int s=typasting(sttt);
        //cout<<"s = "<<s<<endl;
        int l=i;
        if(i!=str.size())
        {
            k=i+1;
            //cout<<"k = "<<k<<"str size"<<str.size()<<endl;
            string mit;
            for( i=k; i<str.size(); i++)
            {


                mit=mit+str[i];

            }
            int miter=typasting(mit);
            // cout<<"miter = "<<miter<<endl;
            speed=miter/3600.00;


        }
        else
        {
            flag=1;
        }
        long long  int ss1=(h*3600)+(m*60)+s;

        long long int  res =ss1-ss;
        //cout<<res<<endl;

        ans=res*km;
        // cout<<"speed ="<<speed<<endl;
        // cout<<ans<<endl;
        sum=sum+ans;
        // cout<<"sum ="<<sum<<endl;

        ss=ss1;
        km=speed;

        if(flag==1)
        {
            for(int q=0; q<=l; q++)
            {
                cout<<str[q];
            }
            cout<<setprecision(2)<<fixed<<sum<<" km"<<endl;
        }

    }
}
