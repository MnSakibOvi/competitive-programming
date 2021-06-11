#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str,s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
   for(int i=0;i<str.size();i++)
   {
   	if(str[i]==' ')
	{
		cout<<str[i];
	}
	else
	{


		for(int j=0;j<s.size();j++)
		{
			if(str[i]==s[j])
				cout<<s[j-2];
		}
	}
   }
   cout<<endl;
}
