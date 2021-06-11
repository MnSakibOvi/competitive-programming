
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string str,sr,ss,dup;
    sr=" ";
    while( getline(cin,str))
    {
        string str1;
        for(int i=0; i<str.size(); i++)
        {
            ss=str[i];
            if(ss==sr)
            {
                reverse(str1.begin(), str1.end());
                cout<<str1<<" ";

               str1.clear();



            }
            else
            {
                str1=str1+ss;
                dup=str1;

            }

        }
        reverse(dup.begin(), dup.end());
                cout<<dup<<endl;

    }



}
