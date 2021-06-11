//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//    //freopen("input.txt", "r", stdin);
//   // freopen("output.txt", "w", stdout);
// string str;
// char c='`',d=' ';
// string str2="''";
//int cn=0;
//   while(getline(cin,str))
//   {
//
//       if(cn=0)
//        cout<<endl;
//       cn++;
//       string strsum;
//       int cnt=1;
//     for(int i=0;i<str.size();i++)
//     {
//         if(cnt%2==1 && str[i]=='"')
//         {
//
//            strsum=strsum+c+c;
//            cnt++;
//
//         }
//         else if(cnt%2==0 && str[i]=='"')
//         {
//           strsum=strsum+str2;
//             cnt++;
//         }
//         else
//            strsum=strsum+str[i];
//
//     }
//     cout<<strsum+d<<endl;
//
//   }
//
//}
#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0,i,l;
    char d[1000];
    while(gets(d))
    {
        l=strlen(d);
        for(i=0; i<l; i++)
        {
            if(d[i]=='"')
            {
                count++;
                if(count%2!=0)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",d[i]);
        }
        printf("\n");
    }
    return 0;
}
