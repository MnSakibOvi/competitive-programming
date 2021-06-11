

#include<bits/stdc++.h>
using namespace std;




int main()
{
    string str;

    while(getline(cin,str))
    {
        if(str=="DONE")
            break;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        //cout<<str<<endl;
        int top=0,flag=0;
        int down=str.size()-1;
        char d,c;
        for(int i=0; top<=down; i++)
        {
            if(str[top]>='a' && str[top]<='z')
            {
                c=str[top];


            }

            else
            {
               // down++;
               top++;
                continue;
            }
            if(str[down]>='a' && str[down]<='z')
            {
                d=str[down];

            }
            else
            {
               // top--;
               down++;
                continue;
            }
                cout<<"c="<<c<<"  d="<<d;
		down=down-1;
            top++;

            if(d!=c)
            {
                flag=1;
                break;
            }




        }
       // cout<<flag<<endl;
        //cin.ignore();
		if(flag==0)
			cout<<"You won’t be eaten!"<<endl;
		else
			cout<<"Uh oh.."<<endl;

			str.clear();

    }

}
