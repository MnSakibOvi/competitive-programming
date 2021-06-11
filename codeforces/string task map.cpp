#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, res = "";
    cin>>str;
    int lenth = str.size();
    for(int i=0; i<lenth; i++)
    {
        str[i] = tolower(str[i]);
    }
    map<char, int> mp;
    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;
    mp['y'] = 1;
    for(int i=0; i<lenth; i++)
    {
        if(mp[str[i]] != 1)
        {
            res += str[i];
        }
    }
    int s = res.size();
    for(int i=0; i<s; i++)
    {
        cout<<"."<<res[i];
    }
}

