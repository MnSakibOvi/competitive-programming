
#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,cl=0, mx=INT_MIN,x;
    cin>>n;
   vector<int>arr;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
        if(x>mx)
        {
            mx=x;
            cl=i;
        }



    }
    cout<<mx<<" "<<cl<<endl;
    long long int res,res2;

    if(cl>0)
        {
            cl--;
            res=arr[cl];
            cl++;
        }
    else
        res=0;



    if(cl<n-1)

        {
            cl++;
            res2=(arr[cl]);
        }
    else
        res2=0;

    long long int r=max(res,res2);
    cout<<r*mx<<endl;
}
int main()
{
    int t;
    cin>>t;
// t=1;
    while(t--)
    {
        solve();
    }
}



