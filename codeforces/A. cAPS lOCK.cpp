#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cnt=0,low=0;
    cin>>str;
    //int hight = str.size();
    for(int i=0; i<str.size(); i++)
    {
        if(isupper(str[i]))
            cnt++;
        if(islower(str[i]))
            low++;
    }
    if( islower(str[0])  && (str.size()-1) == (cnt) )
    {
        str[0]=toupper(str[0]);
        for(int i=0; i<str.size(); i++)
        {
            str[i+1]=tolower(str[i+1]);
        }
        cout<<str;
        return 0;
    }
    else if(str.size()==cnt)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str;
        return 0;
    }
    else if(str.size()==1 && cnt==1)
    {
        str[0]=tolower(str[0]);
        cout<<str;
        return 0;
    }
    else if(str.size()==1 && low==1)
    {
         str[0]=toupper(str[0]);
         cout<<str;
        return 0;
    }
    else
    {
        cout<<str;
    }


}
