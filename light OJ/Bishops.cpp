

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {

        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<"Case "<<k<<": ";
        if(abs(a-c) == abs(b-d))
            cout<<"1";
        else
        {
           if(abs(a-c)%2 == abs(b-d)%2)
		cout<<"2";
	     else
		cout<<"impossible";

        }





        cout<<endl;



    }
    return 0;
}

