#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int b_date=0,b_month,b_year,c_date=0,c_month,c_year,age_date=0,age_month,age_year;
    cin>>b_date>>b_month>>b_year>>c_date>>c_month>>c_year;
    if(b_date>c_date)
    {
       age_date =(c_date+31)-b_date;
       cout<<age_date;
       c_month=c_month-1;
    }
    else
        {
            age_date=c_date-b_date;
          cout<<age_date;
        }

      if(b_month>c_month)
    {
       age_month =(c_month+12)-b_month;
       cout<<"/"<<age_month;
       c_year=c_year-1;
    }
    else
        {
            age_month=c_month-b_month;
          cout<<"/"<<age_month;
        }


      age_year=c_year-b_year;
       cout<<"/"<<age_year<<endl;
}
