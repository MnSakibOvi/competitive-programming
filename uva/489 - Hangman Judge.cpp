
#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n)
    {
    	int yes=0,no=0,flag=0;
       std:: map< char, int > mp;
        std:: map< char, int > mp1;
        std::map<char,int>::iterator it;

        if(n==-1)
            break;
        string str,sstr,res;

        cin>>str>>sstr;
        for(int i=0; i<str.size(); i++)
        {
            mp[str[i]]++;
        }
//        sort(sstr.begin(), sstr.end());
//        res=res+ sstr[0];
//        for(int f=1;f<sstr.size();f++)
//	  {
//	  	if(sstr[f]!=sstr[f-1])
//		{
//			res=res+sstr[f];
//		}
//
//	  }
//	  cout<<res<<endl;
//res=sstr;
//res.erase(std::unique(res.begin(), res.end()), res.end());
  for(int i=0; i<sstr.size(); i++)
        {
        	mp1[sstr[i]]++;
            if(mp1[sstr[i]]==1)
            res=res+sstr[i];
        }

//auto r = unique(sstr.begin(), sstr.end());
// res=string(sstr.begin(),r);
//cout<<res<<endl;



        for(int j=0; j<res.size(); j++)
        {
            it = mp.find(res[j]);
            if (it != mp.end())
            {
            	yes++;

            }
            else
		{
			no++;
		}
		if(yes==mp.size())
		{
			flag=1;
			break;
		}
		if(no==7)
		{
			flag=2;
			break;
		}


	  }
	// cout<<yes<<"   "<<no<<"   "<<mp.size()<<endl;
	  if(flag==1)
	  {
	  	cout<<"Round "<<n<<endl<<"You win."<<endl;

	  }
	  else if(flag==2)
	  {
	  	cout<<"Round "<<n<<endl<<"You lose."<<endl;

	  }
	  else
	  {
	  	cout<<"Round "<<n<<endl<<"You chickened out."<<endl;

	  }
	   mp.clear();



    }



}
