#include <stdio.h>
struct student{
    char name[25];
    int rollno;
    int marks;
    char grade[5]= {"pass"};
};

int main()
{
    struct student stud[15];
    int i,n;

    printf("Enter the Number of Students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter student details:\n");
        printf("Name:");
        scanf("%s",&stud[i].name);
        printf("Roll No:");
        scanf("%d",&stud[i].rollno);
        printf("Marks:");
        scanf("%d",&stud[i].marks);
        printf("\n");
    }
// Print marks
    for(i=0;i<n;i++)
    {
        if(stud[i].marks > 50) 
        { 
            // stud[i].grade = 'p';
            // stud[i].grade = {"pass"}; 
        } 
        else{
            //  stud[i].grade = 'F';
            // stud[i].grade = {"Fail"}; 
        }
    }
    for(i = 0;i<40;i++){
    printf("_");printf("\n");
    }
    printf("Name\tRollNo\tMarks\tGrade\n");

    for(i = 0;i<40;i++){
    printf("_");printf("\n");
    }
    for(i=0;i<n;i++)
        {
        printf("%s\t%d\t%d\t%s\n",stud[i].name,stud[i].rollno,stud[i].marks,stud[i].grade);
   }
   for(i = 0;i<40;i++){
   printf("_");printf("\n");
   }
}