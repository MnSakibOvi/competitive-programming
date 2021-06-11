
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,flag=0;
        cin>>n;
        for(int i=1; n>1; i++)
        {
            flag=0;
            if(n%6==0)
            {
                n=n/6;
                cnt++;
            }
            else
            {
                n=n*2;
                cnt++;
                if(n%3!=0)
                {


                    flag=1;
                    break;
                }


            }

        }
         if(flag ==1)
            {
                cout<<"-1"<<endl;
                //break;
            }
        else
            cout<<cnt<<endl;


    }

}
