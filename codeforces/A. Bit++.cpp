#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if (str=="++X")
            ++c;
        if (str=="--X")
            --c;
    if (str=="X++")
            c++;
            if (str=="X--")
            c--;

    }

cout<<c;
}
