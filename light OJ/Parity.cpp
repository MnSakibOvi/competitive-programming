

#include<bits/stdc++.h>
using namespace std;
int cheack(long long int n)
{
	int cnt=0;
	while(n>0)
	{
		int h=n%2;
		n=n/2;
		if(h==1)
			cnt++;
	}
	return cnt;

}
int main()
{
    int t;
    cin>>t;

    for(int k=1; k<=t; k++)
    {

       cout<<"Case "<<k<<": ";
       long long int n;
       cin>>n;
       int c=cheack(n);
       if(c%2==1)
		cout<<"odd"<<endl;
	 else
		cout<<"even"<<endl;



    }
    return 0;
}




