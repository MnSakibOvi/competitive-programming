


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();

    for(int k=1; k<=t; k++)
    {
        map<char,int>mp,mp2;
        map<char, int>::iterator itr;
        string str,str2;
        getline(cin,str);
        getline(cin,str2);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]!=' ')
                mp[str[i]]++;
        }
        for(int i=0; i<str2.size(); i++)
        {
            if(str2[i]!=' ')
                mp2[str2[i]]++;
        }
        int flag=0;
       // cout<<mp.size()<<" "<<mp2.size()<<endl;
        if(mp.size() != mp2.size())
            flag=1;
        else
        {
         for (itr = mp.begin();itr != mp.end(); ++itr)
            {
////                cout << '\t' << itr->first
////                     << '\t' << itr->second << '\n';
                   char c=itr->first;
                   int nu=itr->second;
                   if(mp2[c]!=nu)
                   {


				flag=1;
				break;
                   }
            }
           // cout<<endl<<endl<<endl;
////            for (itr = mp2.begin(); itr != mp2.end(); ++itr)
////            {
////                cout << '\t' << itr->first
////                     << '\t' << itr->second << '\n';
////            }

        }



        cout<<"Case "<<k<<": ";
        if(flag==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;



    }
    return 0;
}



