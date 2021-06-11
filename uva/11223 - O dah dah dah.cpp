#include<bits/stdc++.h>
using namespace std;
int main()
{
freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    map<string,char>mp;
  mp[".-"] = 'A';       mp[".---"] = 'J';     mp["..."] = 'S';      mp[".----"] = '1';    mp[".-.-.-"] = '.';    mp["---..."] = ':';
    mp["-..."] = 'B';     mp["-.-"] = 'K';      mp["-"] = 'T';        mp["..---"] = '2';    mp["--..--"] = ',';    mp["-.-.-."] = ';';
    mp["-.-."] = 'C';     mp[".-.."] = 'L';     mp["..-"] = 'U';      mp["...--"] = '3';    mp["..--.."] = '?';    mp["-...-"] = '=';
    mp["-.."] = 'D';      mp["--"] = 'M';       mp["...-"] = 'V';     mp["....-"] = '4';    mp[".----."] = '\'';   mp[".-.-."] = '+';
    mp["."] = 'E';        mp["-."] = 'N';       mp[".--"] = 'W';      mp["....."] = '5';    mp["-.-.--"] = '!';    mp["-....-"] = '-';
    mp["..-."] = 'F';     mp["---"] = 'O';      mp["-..-"] = 'X';     mp["-...."] = '6';    mp["-..-."] = '/';     mp["..--.-"] = '_';
    mp["--."] = 'G';      mp[".--."] = 'P';     mp["-.--"] = 'Y';     mp["--..."] = '7';    mp["-.--."] = '(';     mp[".-..-."] = '"';
    mp["...."] = 'H';     mp["--.-"] = 'Q';     mp["--.."] = 'Z';     mp["---.."] = '8';    mp["-.--.-"] = ')';    mp[".--.-."] = '@';
    mp[".."] = 'I';       mp[".-."] = 'R';      mp["-----"] = '0';    mp["----."] = '9';    mp[".-..."] = '&';
    int t;
    cin>>t;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin.ignore();
    for(int j=1; j<=t; j++)
    {
        string str,str1="";
        int f=0;
//        if(j!=1)
//		cout<<endl;


        getline(cin,str);
        cout<<"Message #"<<j<<endl;

        //cout<<str<<"kkk"<<endl;
        for(int i=0;i<str.size();i++)
	  {
	  	if(str[i]!=' ')
	  	str1=str1+str[i];
	  else if(str[i]==' ' && str1!="")
		{
			f=1;
			if(str1==".----.")
				cout<<"'";
			else
			cout<<mp[str1];
			str1.clear();
		}

		string s="";
		s=s+str[i];
		s=s+str[i+1];
		if(s=="  " && f==1)
		{
			cout<<" ";
			i++;
			f=0;
		}
	  }
	  cout<<mp[str1]<<endl;
	  if(j!=t)
		cout<<endl;

    }
}







