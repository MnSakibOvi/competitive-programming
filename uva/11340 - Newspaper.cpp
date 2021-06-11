#include<bits/stdc++.h>
using namespace std;

int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       double x;
       char c;
       cin>>n;
        map<char , double> mp;
         std::map<char,double>::iterator it;
       for(int i=0;i<n;i++)
       {
           cin>>c>>x;
           mp[c]=x;


       }
       int s;
       double sum=0,sum2=0,t=0;
       cin>>s;
       string str;
       cin.ignore();
       while(s--)
	 {
	 	getline(cin,str);
	 	for(int i=0;i<str.size();i++)
		{
			it = mp.find(str[i]);
			  if(it != mp.end())
				sum=sum+it->second;

		}



	 }

		double mn=sum/100;
	printf("%.2lf$\n",mn);
	mp.clear();


   }



}

