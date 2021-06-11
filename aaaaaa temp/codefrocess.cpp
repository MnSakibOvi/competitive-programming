
#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
			return 1;
	}
	return 0;

}
void solve()
{
	int n,cnt=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(prime(i)==0)
			cnt++;


	}
	cout<<cnt<<endl;




}
int main()
{
    int t;
  //  cin>>t;
    t=1;
    while(t--)
    {
    	solve();
    }
}


///////////

#include<bits/stdc++.h>
using namespace std;

void solve()
{

long double ab,bc;
cin>>ab>>bc;
long double aria=ab*bc;
long double redius=bc/4;
if(ab<=redius)
{
     cout<<"-1"<<endl;
	return;
}

long double circle=(redius*redius)*3.14;
long double hight=ab-redius;
long double triangle=(bc*hight)/2.00;
long double sum=circle+triangle;
long double res=aria-sum;

cout<<res<<endl;




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

/////////

//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    for(int j=1; j<=t; j++)
//    {
//
//
//        int hp,d,flag=0,flag2=0;
//        cin>>hp>>d;
//        int h=hp;
//        string str;
//        cin>>str;
//        char a,b,c;
//        for(int i=0; i<str.size(); i++)
//        {
//            if(str[i]=='H' || str [i]=='P')
//            {
//                flag=1;
//                if(str[i]=='H')
//                    a='P';
//                else
//                    a='H';
//            }
//            if(flag==1)
//            {
//                if(str[i]=='#')
//                    h-=d;
//                else if(str[i]=='<' && h<hp)
//                    h+=d;
//                else
//                    continue;
//
//            }
//            if(h<=0)
//            {
//
//
//			flag2=1;
//			break;
//            }
//            if(str[i]==a)
//			break;
//
//        }
//        cout<<"Level "<<j<<": ";
//        if(flag2==1)
//		cout<<"Defeat :("<<endl;
//	  else
//		cout<<"Victory!! :)"<<endl;
//
//
//    }
//}
//
//
//
//
//

