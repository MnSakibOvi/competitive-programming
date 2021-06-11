//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t,mx=0;
//    cin>>t;
//    map<string, int> mp;
//    string str,st,ss;
//    cin>>str;
//    for(int i=0;i<t-1;i++)
//    {
//    	st=str[i];
//    	st=st+str[i+1];
//    	mp[st]++;
//    	if(mp.at(st)>mx)
//	{
//		mx=mp.at(st);
//		ss=st;
//	}
//    }
//    cout<<ss<<endl;
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s = 0;
    cin>>t;
    string str,h="";;
    cin>>str;
    map<string ,int> mp;
    map<string, int>::iterator itr;
    for(int i=0; i<t-1; i++)
    {
        h += str[i];
        h +=str[i+1];
        mp[h]++;
        if(mp[h] > s)
            s = mp[h];
        h ="";
    }
    for(itr = mp.begin(); itr != mp.end(); itr++)
    {
        if(itr->second == s)
        {
            cout<<itr->first;
            break;
        }
    }

}
