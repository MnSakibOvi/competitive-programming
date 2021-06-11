//
//
///// ***********************************************T
///// O *                                           *A
///// O *    Solved By : mn_sakib_ovi(DIU)          *S
///// v *      Be Positive,be Happy.                *I
///// I *                                           *I
///// ***********************************************N
//#include<bits/stdc++.h>
//using namespace std;
//int fact(int f)
//{
//	int sum=1;
//	for(int k=1;k<=f;k++)
//	{
//		sum=sum*k;
//	}
//	return sum;
//}
//void solve()
//{
//	string str,str2;
//	cin>>str>>str2;
//	int plus1=0,plus2=0,minus1=0,minus2=0,ques=0;
//	for(int i=0;i<str.size();i++)
//	{
//		if(str[i]=='+')
//			plus1++;
//		else
//			minus1++;
//	}
//	for(int i=0;i<str2.size();i++)
//	{
//		if(str2[i]=='+')
//			plus2++;
//		else if(str2[i]=='-')
//			minus2++;
//			else
//				ques++;
//	}
//	//cout<<plus1<<plus2<<minus1<<minus2<<ques<<endl;
//	if(plus1==plus2 && minus1==minus2)
//
//		cout<<"1.000000000000" <<endl;
//		else if(plus1==minus2 && plus1==str.size() || minus1==plus2 && minus1==str.size())
//		{
//			cout<<"0.000000000000"<<endl;
//		}
//		else if( ques==0)
//		{
//		   if(plus1!=plus2 || minus1!=minus2)
//		   cout<<"0.000000000000"<<endl;
//
//		}
//		else
//		{
//			int pl=plus1-plus2;
//			int mi=minus1-minus2;
//			int f1=fact(pl);
//			//cout<<f1<<" ";
//			int f2=fact(mi);
//			//cout<<f1<<" ";
//			int m=fact(ques);
//			 float res1=(m/(f1*f2));
//			 float power=pow(2,ques);
//		float res=res1/power;
//			printf("%.12f\n",res);
//
//		}
//
//
//
//
//}
//int main()
//{
//    int t;
//   // cin>>t;
//    t=1;
//    while(t--)
//    {
//    	solve();
//    }
//}
//
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1;
    cin>>str>>str1;
    int len = str.size(),len2 = str1.size(),cnt1=0,cnt2=0,s1=0,s2=0,s3=0,sum=0;
    int res=1,res1=1,res2=1;
    float ans=0,ans2=0;
    for(auto i : str)
    {
        if(i == '+')
            cnt1++;
        else
            cnt2++;
    }
    for(auto j : str1)
    {
        if(j == '+')
            s1++;
        else if(j=='-')
            s2++;
        else
            s3++;
    }
    s1 = cnt1 - s1;
    s2 = cnt2 - s2;
    if(s1 < 0 || s2 < 0)
        cout<<"0.000000000000"<<endl;
    else if(s3 == 0)
        cout<<"1.000000000000"<<endl;
    else
    {
        sum = pow(2,s3);
        for(int i=1; i<=s3; i++)
            res *=i;
        for(int i=1; i<=s2; i++)
            res1 *=i;
        for(int i=1; i<=s1; i++)
            res2 *=i;
        ans = res*1.0 / (res1 * res2) *1.0;
        ans2 = ans *1.0 / sum*1.0;
         printf("%.12f",ans2);
    }

}
