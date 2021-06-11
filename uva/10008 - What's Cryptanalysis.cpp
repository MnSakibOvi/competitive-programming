
#include<bits/stdc++.h>
using namespace std;
int main()
{


//     freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    map<char,int>mp;
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin,str);
       transform(str.begin(), str.end(), str.begin(), ::toupper);
        for(int i=0;i<str.size();i++)
        {


        if(str[i]>='A' && str[i]<='Z')
	  {


		mp[str[i]]++;
	  }
        }



    }
     map<char, int>::iterator itr;

     vector<int>v;
      vector<char>cc;
       vector<int>v2;
     for( itr =mp.begin();itr !=mp.end();itr++)
     {
     	int k=itr->second;
     	char c=itr->first;
     //	cout<<c<<endl;
     	v.push_back(k);
     	v2.push_back(k);
     	cc.push_back(c);
    // 	mp2[k]=c;

     }
      sort(v.begin(), v.end(), greater<int>());

      for(int j=0;j<v.size();j++)
	{
		for(int i=0;i<v2.size();i++)
		{
                  if(v[j]==v2[i])
			{

				cout<<cc[i]<<" "<<v2[i]<<endl;
				v2[i]=0;

			}
		}


	}

}








