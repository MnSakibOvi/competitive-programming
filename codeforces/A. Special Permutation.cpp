#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=2;
        while(n--)
        {
            if(n!=0)
            {
                cout<<k<<" ";
            }

            else
            {
                cout<<"1 ";
                break;
            }
            k++;

        }
        cout<<endl;
    }

}
