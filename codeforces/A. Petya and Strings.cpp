#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,f=0;
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    for(i=0;i<a.size();i++)
    {
        if(a[i] == b[i])
            continue;
        if(a[i]<b[i])
        {
            cout<<"-1";
            f=1;
            break;
        }
        if(a[i]>b[i])
        {
            cout<<"1";
            f=1;
            break;
        }
   }
    if(f==0)
        cout<<"0";

}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int i,cnt1=0,cnt2=0;
//    string str1,str2;
//    cin>>str1>>str2;
//    int s = str1.size();
//    for(i=0 ; i<s; i++)
//    {
//        str1[i] = tolower(str1[i]);
//        str2[i] = tolower(str2[i]);
//    }
//    for(i=0 ; i<s; i++)
//    {
//        if(str1[i] != str2[i])
//        {
//            for(char c ='a' ; c<='z'; c++)
//            {
//                if(str1[i]==c)
//                {
//                    break;
//                }
//                cnt1++;
//            }
//            for(char c ='a' ; c<='z'; c++)
//            {
//                if(str2[i]==c)
//                {
//                    break;
//                }
//                cnt2++;
//            }
//            break;
//        }
//
//    }
//    if(cnt1<cnt2)
//    {
//        cout<<"-1";
//    }
//    else if(cnt1==cnt2)
//    {
//        cout<<"0";
//    }
//    else
//    {
//        cout<<"1";
//    }
//
//}
