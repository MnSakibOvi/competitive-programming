#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {

    string str;
    cin>>str;
    for(int j=1;j<str.size()-1;j++)
    {
        if(str[j]==str[j+1])
        {

    str.erase(str.begin()+j);
        }

    }
     cout<<str<<endl;

}
}
