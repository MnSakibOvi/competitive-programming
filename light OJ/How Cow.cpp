


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
    	int x1,y1,x2,y2,n;
    	cin>>x1>>y1>>x2>>y2>>n;
    	cout<<"Case "<<k<<":"<<endl;
    	while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>=x1 && a<=x2 && b>=y1 &&b<=y2)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }







    }
    return 0;
}



