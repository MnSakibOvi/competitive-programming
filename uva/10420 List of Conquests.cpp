#include<bits/stdc++.h>
using namespace std;

void solve();

void multipleTestCase()
{
    int t;
    t=1;
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
    int n,cnt=1;
    cin>>n;
    string arr[n],name;
    vector<string>str;
    vector<int>cc;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        getline(cin , name);

    }
   // str.push_back(arr[0]);

    sort(arr ,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
            cnt++;
        else
        {
            str.push_back(arr[i]);
           cc.push_back(cnt);
           cnt=0;
        }


    }
    str.push_back(arr[i]);
           cc.push_back(cnt);
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" "<<cc[i]<<endl;
    }






}

