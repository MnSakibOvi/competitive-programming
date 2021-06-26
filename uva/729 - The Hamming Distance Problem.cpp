
#include<bits/stdc++.h>
using namespace std;
string make(int n,int k)
{
    int g=n- k;
    string str = "";
    for(int i=0;i<n;i++)
    {
        if(i<g)
            str+='0';
        else
            str+='1';
    }
    return str;
}
string revarse(string s)
{

    string ss="";
    for(int i=s.size()-1;i>=0;i--)
    {
        ss+=s[i];
    }
    return ss;
}
int main()
{
int t,cnt=0;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    if(cnt!=0)
    cout<<endl;

    string str=make(n,k);
    string str2=revarse(str);
    //cout<<str<<" "<<str2<<endl;
    cout<<str<<endl;
    while(true)
    {
        if(str==str2)
            break;
            next_permutation(str.begin(),
                           str.end());
                           cout<<str<<endl;

    }


cnt++;

}


//
//next_permutation(str.begin(),
//                           str.end());


}

