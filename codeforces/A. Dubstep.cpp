#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char a='W',b='U',c='B';
    int g=0;
    for(int i=0; i<str.size(); i++)
    {

        if(str[i]==a && str[i+1]==b && str[i+2]==c)
        {

                cout<<" ";
            i=i+2;
        }
        else
            cout<<str[i];
    }

}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string str;
//    cin>>str;
//    int len = str.size();
//   for(int i=2; i<len; i++)
//   {
//       if(str[i-2]=='W'&&str[i-1]=='U'&&str[i]=='B')
//        {
//             str[i-2]   = '@';
//             str[i-1]   = '@';
//             str[i]     = '@';
//        }
//   }
//   for(int i=0; i<len; i++)
//   {
//       if(str[i]!='@')
//       {
//           for(; i<len && str[i] != '@'; i++)
//           {
//               cout<<str[i];
//           }
//           cout<<" ";
//       }
//   }
//}
