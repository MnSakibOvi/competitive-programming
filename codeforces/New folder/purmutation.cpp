#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        string s=str;
        next_permutation(str.begin(),
                           str.end());
        cout<<str<<endl;
        while(str!=s)
        {
            next_permutation(str.begin(),
                           str.end());
                           cout<<str<<endl;
        }
    }
}

