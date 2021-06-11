#include <stdio.h>

struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
    int stu_num;
};
int main()
{

     struct StudentData student;

     student.stu_name = "muhammad nazmus sakib";
     student.stu_id = 2013520;
     student.stu_age = 21;
     student.stu_num = 01722644;


     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     printf("\nStudent phone number is: %d", student.stu_num);
     return 0;
}
