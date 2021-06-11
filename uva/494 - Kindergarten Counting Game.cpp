

#include<bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
   string str;

   while(getline(cin,str))
   {
   	int flag=0,cnt=0;
   	for(int i=0;i<str.size();i++)
	{
		 transform(str.begin(), str.end(), str.begin(), ::tolower);
		if(flag==0 && str[i]>='a' && str[i]<='z')
		{
			cnt++;
			flag=1;
			//cout<<str[i]<<endl;
			//cout<<cnt<<"  || "<<endl;
		}

		else if(str[i]>='a' && str[i]<='z')
		{
			continue;
		}
		else
			flag=0;

	}

	cout<<cnt<<endl;

   }
}

