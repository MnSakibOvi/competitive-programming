#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    string str;

    while(getline(cin,str))
    {
        map< string, int > mp;
        string c,g=" ";
        int sum=0;
        string res;
        for(int i =0; i<str.size(); i++)
        {
            c=str[i];
            if(c>="a" && c<="z" || c>="A" && c<="Z")
            {
                mp[c]++;
              //  cout<<c<<" ";

              //cout<<mp[c]<<" 0\";
              if(mp[c] >= sum)
		  {
		  	if(mp[c]>sum)
			{
				res.clear();
				res=res+c;
			}

		  	if(sum==mp[c])
			{
				res=res+c;
			}
				sum=mp[c];
		  }

            }

        }
        sort(res.begin(), res.end());
        cout<<res<<" "<<sum<<endl;

    }
    cin.ignore();

}
