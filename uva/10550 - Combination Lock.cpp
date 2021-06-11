#include<bits/stdc++.h>
using namespace std;

int main()
{
   freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    map<char, int> mp;
    mp['a']=1;mp['b']=2;mp['c']=3;
    mp['d']=1;mp['e']=2;mp['f']=3;
    mp['g']=1;mp['h']=2;mp['i']=3;
    mp['j']=1;mp['k']=2;mp['l']=3;
    mp['m']=1;mp['n']=2;mp['o']=3;
    mp['p']=1;mp['q']=2;mp['r']=3;mp['s']=4;
    mp['t']=1;mp['u']=2;mp['v']=3;
    mp['w']=1;mp['x']=2;mp['x']=3;mp['z']=4;

    int n;
    cin>>n;
    string str;
    cin.ignore();
    while( n--)
    {
    	int sum=0;
        getline(cin,str);
        for(int i=0;i<str.size();i++)
	  {
	  	if(str[i]==' ')
			sum+=1;


	  else
	  {
	  	sum+=mp[str[i]];

	  }
	  }
	  cout<<sum<<endl;


    }



}

