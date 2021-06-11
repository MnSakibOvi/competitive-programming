

#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t,cnt=0;
    cin>>t;

    while( t--)

    {
    	cnt++;
        vector<string> v;
        string str;
        int n,sum=0;
        for(int i=0; i<10; i++)
        {
            cin>>str>>n;
            if(n>=sum)
            {
                if(n>sum)
			{
				 v.clear();
				 v.push_back(str);

			}
			else
			{
				 v.push_back(str);
			}
                    sum=n;
            }
        }
        cout<<"Case #"<<cnt<<":"<<endl;
        for(int i=0;i<v.size();i++)
	  {
	  	cout<<v[i]<<endl;
	  }
	  v.clear();


    }



}

