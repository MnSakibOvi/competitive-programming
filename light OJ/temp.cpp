#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str,s1="marshtomp",d="fjxmlhx",s2="MARSHTOMP";

   while(getline(cin,str))
   {
       string ff="";
       int c=0;
       for(int i=0; i<str.size() ; i++)
       {
       	if(i<str.size()-8)
	     {


           if(str[i] == s1[0] || str[i]==s2[0] && str[i+1] == s1[1] || str[i+1]==s2[1] && str[i+2] == s1[2] || str[i+2]==s2[2] && str[i+3] == s1[3] || str[i+3]==s2[3] && str[i+4] == s1[4] || str[i+4]==s2[4] && str[i+5] == s1[5] || str[i+5]==s2[5] &&
		str[i+6] == s1[6] || str[i+6]==s2[6] && str[i+7] == s1[7] || str[i+7]==s2[7] && str[i+8] == s1[8] || str[i+8]==s2[8])
           {
                cout<<d;
			i=i+8;
           }
            else
           {

               cout<<str[i];

           }

	     }
           else
           {

               cout<<str[i];

           }

       }
       cout<<endl;
   }
}
