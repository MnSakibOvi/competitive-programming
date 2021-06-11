#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    sort(str.begin(), str.end());
    //cout<<str<<endl;

    if(n<26)
        cout<<"NO";
    else
    {
        for(int i=0; i<n; i++)
        {
            if(str[i]==str[i+1])
                cnt++;

        }
        if((n-cnt)>=26)
            cout<<"YES";
        else
            cout<<"NO";
    }

}
