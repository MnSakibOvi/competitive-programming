#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int d=x;
        int j=1;
        int c=0;
        for(int i=1; x!=0; i++)
        {
            int r=x%10;
            if(r!=0)
            {
//                cout<<r*j<<" ";
                c++;
            }
            x=x/10;
            j=j*10;
        }
        cout<<c<<endl;

        c=0;
         x=d;
         j=1;
         for(int i=1; x!=0; i++)
        {
            int r=x%10;
            if(r!=0)
            {
               cout<<r*j<<" ";

            }
            x=x/10;
            j=j*10;
        }

    }
    cout<<endl;

}
