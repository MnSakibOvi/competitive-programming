#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]==s[i-1])
            sum++;
    }
    cout<<sum;
}
