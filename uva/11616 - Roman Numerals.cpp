
#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
while(cin>>str)
{
    if(str[0]>='A' && str[0]<='Z')
    {
        int sum=0;
        int n=str.size();
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='I')
            {
                if(i<n-1 && str[i+1]=='V')
                {
                    sum+=4;
                    i++;

                }
                else if(i<n-1 && str[i+1]=='X')
                {
                    sum+=9;
                    i++;
                }
                else
                    sum+=1;
            }
            else if(str[i]=='X')
            {
                if(i<n-1 && str[i+1]=='L')
                {
                    sum+=40;
                    i++;

                }
                else if(i<n-1 && str[i+1]=='C')
                {
                    sum+=90;
                    i++;
                }
                else
                    sum+=10;


            }
            else if(str[i]=='C')
            {
                if(i<n-1 && str[i+1]=='D')
                {
                    sum+=400;
                    i++;

                }
                else if(i<n-1 && str[i+1]=='M')
                {
                    sum+=900;
                    i++;
                }
                else
                    sum+=100;

            }
            else if(str[i]=='V')
                sum+=5;
            else if(str[i]=='L')
                sum+=50;
            else if(str[i]=='D')
                sum+=500;
             else if(str[i]=='X')
                sum+=10;
            else if(str[i]=='C')
                sum+=100;
            else if(str[i]=='M')
                sum+=1000;


        }





  cout<<sum<<endl;




    }
    else
    {
        stringstream geek(str);
        int n=0;
        geek>>n;
        string s="";
        int f=n;
        //cout<<n<<endl;
      while(n!=0)
      {
        if(n>=1000)
        {
            s+="M";
            n-=1000;
        }
        else if(n>=900)
        {
            s+="CM";
            n-=900;
        }
         else if(n>=500)
        {
            s+="D";
            n-=500;
        }
        else if(n>=400)
        {
            s+="CD";
            n-=400;
        }
        else if(n>=100)
        {
            s+="C";
            n-=100;
        }
           else if(n>=90)
        {
            s+="XC";
            n-=90;
        }
             else if(n>=50)
        {
            s+="L";
            n-=50;
        }
        else if(n>=40)
        {
            s+="XL";
            n-=40;
        }
         else if(n>=10)
        {
            s+="X";
            n-=10;
        }
          else if(n>=9)
        {
            s+="IX";
            n-=9;
        }
             else if(n>=5)
        {
            s+="V";
            n-=5;
        }
        else if(n>=4)
        {
            s+="IV";
            n-=4;
        }
        else if(n>=1)
        {
             s+="I";
            n-=1;
        }




      }

      cout<<s<<endl;
      if(s=="CMC" || s=="MCMC" || s=="MMCMC")
      {
          cout<<" ---->"<<f<<endl;
      }
    }
}
}

