#include<bits/stdc++.h>
using namespace std;


int main()
{
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    string str;
    const char *as[13]= {"A","H","I","1","M","O","T","U","V","W","X","Y","8"};

    const char *ass[17]= {"AA","E3","HH","II","JL","MM","OO","S2","TT","UU","VV","WW","XX","YY","Z5","11","88"};
    while(cin>>str)
    {
        int top=0,flag=0;
        int down=str.size()-1;
        //palindrome
        for(int i=0; top<=down; i++)
        {
            if(str[top]!=str[down])
            {
                flag=1;


                break;
            }
            top++;
            down--;


        }

        int topp=0,flag2=1,flag3=0;
        int downn=str.size()-1;
        string main,revarse;
        for(int i=0; topp<downn; i++)
        {
            string main,revars;
            char c,d;
            c=str[topp];
            d=str[downn];
            main=main+c;
            main=main+d;
            revarse=revarse+d+c;
            //cout<<main<<" "<<revarse<<endl;

            for(int j=0; j<17; j++)
            {
                if(main==ass[j] || revarse==ass[j])
                {
                    flag2=0;
                    break;
                }
            }
            if(flag2!=0)
            {
                flag3=1;
            }
            topp++;
            downn--;
            flag2=1;
            main.clear();
            revarse.clear();


        }
        //cout<<flag<<" "<<flag3<<endl;
        int flag4=1;
        if(str.size()==1)
	  {
	  	 int middle=(str.size()/2);
            string h;
            h=h+str[0];
            for(int k=0; k<13; k++)
            {
                if(h==as[k])
                {

                    flag4=0;
                    break;
                }

            }
            if(flag4==1)

	  	cout<<str<<" -- is a regular palindrome."<<endl<<endl;
	  	else
		{
			cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
		}
	  }

     else if(str.size()%2==1)
        {
            int middle=(str.size()/2);
            string h;
            h=h+str[middle];
            for(int k=0; k<13; k++)
            {
                if(h==as[k])
                {

                    flag4=0;
                    break;
                }

            }
            if(flag==0 && flag3==0 )
            {
                if(flag4==0)
                    cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
                else
                    cout<<str<<" -- is a regular palindrome."<<endl<<endl;

            }
            else if(flag==1 && flag3==0)
            {
                if(flag4==0)
                    cout<<str<<" -- is a mirrored string."<<endl<<endl;
                else
                    cout<<str<<" -- is not a palindrome."<<endl<<endl;
            }
            else if(flag==0 && flag3==1)
            {


                cout<<str<<" -- is a regular palindrome."<<endl<<endl;
            }
            else
                cout<<str<<" -- is not a palindrome."<<endl<<endl;


        }

        else
        {

            if(flag==0 && flag3==0)
                cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
            else if(flag==1 && flag3==0)
                cout<<str<<" -- is a mirrored string."<<endl<<endl;
            else if(flag==0 && flag3==1)
            {


                cout<<str<<" -- is a regular palindrome."<<endl<<endl;
            }
            else
                cout<<str<<" -- is not a palindrome."<<endl<<endl;


        }

    }


}

