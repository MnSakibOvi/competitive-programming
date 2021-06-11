#include<bits/stdc++.h>
using namespace std;

int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

    int n,p,t=0;
    while(cin>>n>>p)

    {
        if(n==0 && p==0)
            break;
        t++;
    if(t>1)
        cout<<endl;


        string str;
        cin.ignore();
        while(n--)
            getline(cin,str);

        double ps=999999999;
        int rs=-1;
        string store;
        while(p--)
        {
            string str1;
            getline(cin,str1);
           // cout<<"          fuck="<<str1;
            double price;
            int r;
            cin>>price>>r;
            if(r>=rs)
            {

                if(r==rs)
                {
                    if(price<ps)
                    {
                        ps=price;
                        store=str1;
                    }
                }
                else
                {
                    ps=price;
                    store=str1;
                }

                rs=r;
            }
            string st;
            cin.ignore();
            while(r--)
                getline(cin,st );
        }
        cout<<"RFP #"<<t<<endl;
        cout<<store<<endl;
    }
    return 0;
}
