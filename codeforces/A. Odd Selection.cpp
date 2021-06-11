#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}


int main()
{
    multipleTestCase();
    return 0;
}

void solve()
{
    int n,x,odd=0,even=0;
    cin>>n>>x;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;

    }
//cout<<even<<" "<<odd<<endl;
if(odd==0)
    cout<<"No"<<endl;

   else if(x%2==1)
    {
        if(odd>=x)
            cout<<"Yes"<<endl;
        else
        {
            if(odd%2==1)
                cout<<"Yes"<<endl;
            else
            {
                if((odd-1)+even>=x)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
    }
    else
    {
        if(odd>=x)
        {
            if(even>0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
            if(odd%2==1)
                cout<<"Yes"<<endl;
            else
            {
                if((odd-1)+even>=x)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
    }


}

