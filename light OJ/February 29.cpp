


#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<long int ,int>mp;
     for(long  int i=2000;i<=100000;i=i+4)
    {
        int flag=0;

        if (i % 4 == 0) {
        if (i % 100 == 0) {
            if (i % 400 == 0)
               flag=1;
        }
        else
            flag=1;
        }
        if(flag==1)
          mp[i]++;

    }
    cout<<mp[2004]<<endl;

    int t;
    cin>>t;


    for(int k=1; k<=t; k++)
    {


        cout<<"Case "<<k<<": ";

        cout<<endl;



    }
    return 0;
}

