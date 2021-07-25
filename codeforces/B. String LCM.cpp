

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         string str,str2;
         cin>>str>>str2;
        // cout<<"->";

         int l=str.size();
         int l2=str2.size();
          if(l2>l)
          {
              swap(str,str2);
              swap(l,l2);
          }
          int flag=0;
          int n=l2;
          while(n>0)
          {
              if(l%n==0 && l2% n==0)
              {
                 string s="";

                 for(int i=0;i<n;i++)
                    s+=str[i];

                 //cout<<"->"<<s<<endl;

                 string s1="",s2="";
                for(int i=0;i<(l/n);i++)
                    s1+=s;
                for(int i=0;i<(l2/n);i++)
                    s2+=s;

                    if(s1==str && s2==str2)
                    {
                       int m1=l/n;
                       int m2=l2/n;

                       for(int i=0;i<(m1*m2);i++)
                        cout<<s;
                        cout<<endl;
                        flag=1;


                        n=0;
                    }

              }
              n--;
          }


        if(flag==0)
            cout<<"-1"<<endl;
    }


    return 0;
}




/*bbabbbab
bbabbbabbbabbbabbbab
bbabbbabbbabbbab
bbabbbabbbabbbabbbab
bbabbbabbbabbbabbbabbbabbbabbbabbbabbbab
bbab*/
