

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin.ignore();
   while(getline(cin,str))
   {
   	int flag=0,cnt=0;
   	for(int i=0;i<str.size().size;i++)
	{
		if(flag==0 && str[i]>='a' && str[i]<=z)
		{
			cnt++;
			flag=1;
		}

		else
			flag=0

	}
	cout<<cnt<<endl;

   }
}
