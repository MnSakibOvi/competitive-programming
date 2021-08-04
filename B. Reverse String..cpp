


#include<bits/stdc++.h>
using namespace std;

void solve()
{
string str,str2;
cin>>str>>str2;
for(int i=0;i<str.size();i++)
{
    if(str[i]==str2[0])
    {
        int a=1,k=i,fl=0,n=str2.size()-1;
        while(n--)
        {


                if(str[k+1]==str2[a] && fl==0 && k<str.size()-1)
                {
                    k++;
                    a++;
                }
                else if(str[k-1]==str2[a] && k>0)
                {
                    k--;
                    a++;
                    fl=1;

                }
                else
                {
                    break;
                }


          ///  cout<<a<<endl;
            if(a==str2.size())
                {
                    cout<<"YES"<<endl;
                    return;
                }


        }
        if(a==str2.size())///for 1
                {
                    cout<<"YES"<<endl;
                    return;
                }


        int kk=i,j=1;
       for(int gg=i-1;gg>=0;gg--)
       {

           if(str[gg]==str2[j])
           {
               j++;

           }
           else
            break;


            if(j==str2.size())
           {
               cout<<"YES"<<endl;
                    return;

           }
       }

    }



}

cout<<"NO"<<endl;
                    return;
}
int main()
{


    int t;
   cin>>t;
 //  t=1;
    while(t--)
    {
    	solve();
    }
}


