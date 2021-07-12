
#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
	int t;
	cin>>t;
	while(t--)
    {

        string str;
        cin>>str;
        char c='a';
        int flag=0,cl=0,fl=0,cnt=0;

        for(int i=0;i<str.size();i++)
        {
            if(str[i]==c)
            {
                cl=i;
                fl=1;
                c++;
                cnt++;
                break;
            }
        }
        if(fl==0)
            cout<<"NO"<<endl;
        else
        {
          //1  cout<<cl<<endl;
            int tp=cl+1;
            int dn=cl-1;
            while(cnt<str.size())
            {
                if(str[tp]==c)
                   {
                     tp++;
                     c++;
                   }
                else if(str[dn]==c)
                    {
                        dn--;
                        c++;
                    }
                else
                {
                    flag=1;
                    break;
                }
                cnt++;
            }

            if(flag==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }

    }
	return 0;
}
