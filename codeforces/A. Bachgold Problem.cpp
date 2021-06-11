
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int s=x/2;
    cout<<s<<endl;
    if(x%2==0)
    {
        for(int i=1;i<=s;i++)
        {
            cout<<"2"<< " ";
        }
    }
    else
        {
             for(int i=1;i<s;i++)
        {
            cout<<"2"<< " ";
        }
    cout<<"3";

        }

}
