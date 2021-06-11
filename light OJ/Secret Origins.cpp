

#include<bits/stdc++.h>
using namespace std;
string binary (int a)
{
    string str="";
for(int i=31 ;i>=0;i--)
    {
        int k=a%2;
        a=a/2;
        if(k==1)
            str+='1';
        else
            str+='0';



    }
    //cout<<cnt<<endl;
    return str;

}
int decimal(string str)
{
	int x=0;
	for(int i=0;i<32;i++)
	{
		x=(2*x)+str[i]-'0';
	}
	return x;


}
void solve()
{

    int t;
    cin>>t;
    for(int v=1; v<=t; v++)
    {
        int n,h;
        cin>>n;
        string g=binary(n);
    //    cout<<g<<endl;
        reverse(g.begin(),g.end());
          next_permutation(g.begin(), g.end());


       int k=decimal(g);
        //cout<<g<<endl;

        cout<<"Case "<<v<<": ";
        cout<<k<<endl;
    }
}




int main()
{
    int t;
//cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
