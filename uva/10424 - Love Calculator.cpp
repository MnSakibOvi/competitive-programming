

#include<bits/stdc++.h>
using namespace std;
int digit(int a)
{
	int sum3=0;

	while(a!=0)
	{
		sum3+=(a%10);
		a=a/10;
		//cout<<a<<endl;

	}
	return sum3;
}
int main()
{




  // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    map<char, int> mp;
    mp['a']=1;mp['b']=2;mp['c']=3;
    mp['d']=4;mp['e']=5;mp['f']=6;
    mp['g']=7;mp['h']=8;mp['i']=9;
    mp['j']=10;mp['k']=11;mp['l']=12;
    mp['m']=13;mp['n']=14;mp['o']=15;
    mp['p']=16;mp['q']=17;mp['r']=18;mp['s']=19;
    mp['t']=20;mp['u']=21;mp['v']=22;
    mp['w']=23;mp['x']=24;mp['y']=25;mp['z']=26;
    mp['A']=1;mp['B']=2;mp['C']=3;
    mp['D']=4;mp['E']=5;mp['F']=6;
    mp['G']=7;mp['H']=8;mp['I']=9;
    mp['J']=10;mp['K']=11;mp['L']=12;
    mp['M']=13;mp['N']=14;mp['O']=15;
    mp['P']=16;mp['Q']=17;mp['R']=18;mp['S']=19;
    mp['T']=20;mp['U']=21;mp['V']=22;
    mp['W']=23;mp['X']=24;mp['Y']=25;mp['Z']=26;

     string str1,str2;
    // cin.ignore();
     while(getline (cin,str1))
     {
     	int sum1=0,sum2=0;
     	getline(cin,str2);
     	for(int i=0;i<str1.size();i++)
	{

		if(str1[i]>='a' && str1[i]<='z' || str1[i]>='A' && str1[i]<='Z' )
		{
			//cout<<str1[i]<<"= "<<mp[str1[i]]<<" ";
			sum1+=mp[str1[i]];

		}
	}
	//cout<<sum1<<endl;
		for(int i=0;i<str2.size();i++)
	{

		if(str2[i]>='a' && str2[i]<='z' || str2[i]>='A' && str2[i]<='Z' )
		{
			//cout<<str1[i]<<"= "<<mp[str1[i]]<<" ";
			sum2+=mp[str2[i]];

		}
	}
	//cout<<sum2<<endl;
	int f,l;
	l=sum2;
	f=sum1;
	while((f/10)!=0)
	{
		f=digit(sum1);
		sum1=f;
	}
	//cout<<f<<endl;
	while((l/10)!=0)
	{
		l=digit(sum2);
		sum2=l;
	}
	//cout<<l<<endl;
	if(f<l)
	{
		swap(l,f);

	}
	double g=0;
	g=f*1.00;

	double res=0;
	res=(l/g);
	res=res*100;
	printf("%.2lf",res);
	cout<<" %"<<endl;
	int p=0;
	l=p;
	f=p;




     }






}
