
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("input.txt", "r", stdin);
   //  freopen("output.txt", "w", stdout);
    int n,cnt=0;
    while(cin>>n)
    {
    	if(cnt>0)
		cout<<endl;
	    	cnt++;
        map<string, int> mp;
         map<string, int>::iterator it;
         vector<string>x;


        for(int i=0; i<n; i++)
        {
            string str;
            cin>>str;
            x.push_back(str);
            mp[str] = 0;

        }

        for(int i=0; i<n; i++)
        {
            string str1;

            int taka,men;
            cin>>str1;
            cin>>taka>>men;

            int p=floor((taka*1.00)/(men*1.00));
            int f=p*men;
            mp[str1]-=f;

           // string arr[men];
            for(int j=0; j<men; j++)
            {
                string str2;


                cin>>str2;
                mp[str2]+=p;
            }
        }
       // cout<<mp["dave"]<<endl;
////       for(it=mp.begin();it!=mp.end();it++)
////	 {
////	 	cout<<it->first<<" "<<it->second<<endl;
////	 }
for(int h=0;h<x.size();h++)
{
	cout<<x[h]<<" "<<mp[x[h]]<<endl;
}



        mp.clear();
       // cout<<endl;

    }



}

