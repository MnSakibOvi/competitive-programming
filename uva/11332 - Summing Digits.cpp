
#include<bits/stdc++.h>
using namespace std;
int digit(int a)
{
	int mod=0,sum=0;
	while(a!=0)
	{
		mod=a%10;
		a=a/10;
		sum=sum+mod;


	}
//cout<<sum<<endl;
return sum;
}

int main()
{
   // freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
    int n,a,b,c;
    while( cin>>n)

    {
        if(n==0)
            return 0;
	while(n>9)
	{
		n=digit(n);
	}
	cout<<n<<endl;

    }



}
