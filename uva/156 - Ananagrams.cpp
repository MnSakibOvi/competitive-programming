////
////#include<bits/stdc++.h>
////using namespace std;
////
////string low_to_up(string str)
////{
////    transform(str.begin(), str.end(), str.begin(), ::tolower);
////    sort(str.begin(),str.end());
////    return str;
////}
////
////
////int main()
////{
////   string str,str1,v3,v1;
////   map<string ,int> mp;
////   vector<string> v;
////   while(true)
////   {
////       cin>>str;
////       if(str == "#")
////       break;
////       v.push_back(str);
////       v3 = low_to_up(str);
////       mp[v3]++;
////   }
////   sort(v.begin(),v.end());
////   for(int i=0; i<v.size(); i++)
////   {
////       str1 = v[i];
////       v1 = low_to_up(str1);
////       if(mp[v1]==1)
////        cout<<v[i]<<endl;
////   }
////}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    string str;
//    while(true)
//    {
//        getline(cin,str);
//        if(str == "DONE")
//            break;
//        string main="",d;
//        int len = str.size();
//        transform(str.begin(), str.end(), str.begin(),::tolower);
//        for(int i=0; i<len; i++)
//        {
//            d = str[i];
//            if(d >="a" && d <= "z")
//                main += d;
//        }
//        int len1 =main.size(),low=0,high=0,flag =0;
//        low = (len1 / 2) - 1;
//        if(len1&1)
//            high = (len1 / 2) + 1;
//        else
//            high = (len1 / 2);
//
//        while(low>=0)
//        {
//            if(main[low] == main[high])
//            {
//                low--;
//                high++;
//            }
//            else
//            {
//                cout<<"Uh oh.."<<endl;
//                flag =1;
//                break;
//            }
//        }
//        if(flag == 0)
//            cout<<"You won't be eaten!"<<endl;
//
//    }
//}
#include<bits/stdc++.h>
using namespace std;

string low_to_up(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(),str.end());
    return str;
}


int main()
{
   string str,str1,v3,v1;
   map<string ,int> mp;
   vector<string> v;
   while(true)
   {
       cin>>str;
       if(str == "#")
       break;
       v.push_back(str);
       v3 = low_to_up(str);
       mp[v3]++;
   }
   sort(v.begin(),v.end());
   for(int i=0; i<v.size(); i++)
   {
       str1 = v[i];
       v1 = low_to_up(str1);
       if(mp[v1]==1)
        cout<<v[i]<<endl;
   }
}
