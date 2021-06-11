#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0;

    string str;
 char str2[6]={'h','e','l','l','o'};
    cin>>str;

    for( i=0;i<str.size();i++)
    {
        if(str[i]== str2[j])
        {
            j++;
        }

    }
if(j==5)cout<<"YES";
else
    cout<<"NO";
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string str;
//    int s = 1;
//    cin>>str;
//    char a='h',b='e',c='l',d='o';
//    for(int i=0; i<str.size(); i++)
//    {
//        if(str[i]==a)
//        {
//            for(int j=i+1; j<str.size(); j++)
//            {
//                if(str[j]==b)
//                {
//                    for(int k=j+1; k<str.size(); k++)
//                    {
//                        if(str[k]==c)
//                        {
//                            for(int p=k+1; p<str.size(); p++)
//                            {
//                                if(str[p]==c)
//                                {
//                                    for(int o=p+1; o<str.size(); o++)
//                                    {
//                                        if(str[o]==d)
//                                        {
//                                            cout<<"YES";
//                                            int s=0;
//                                            return 0;
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    if(s==1)
//    {
//        cout<<"NO";
//    }
//
//}
