#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,b;
    string  str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if (isupper(str[i]))
        {
            c++;
        }
    }
    b=str.size()/2;
    if(c==b || c<b)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout <<str<< endl;

    }
   else
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout <<str<< endl;

    }
}

