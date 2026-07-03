//If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and average marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter Number for Subject 1 : ");
    scanf("%d",&sub1);
    if(sub1>100)
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Enter Number for Subject 2 : ");
    scanf("%d",&sub2);
   if(sub2>100)
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Enter Number for Subject 3 : ");
    scanf("%d",&sub3);
    if(sub3>100)
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Enter Number for Subject 4 : ");
    scanf("%d",&sub4);
    if(sub4>100)
    {
        printf("Invalid Input\n");
        return 0;
    }
    printf("Enter Number for Subject 5 : ");
    scanf("%d",&sub5);
    if(sub5>100)
    {
        printf("Invalid Input\n");  
        return 0;
    }
    
    int aggregate = sub1+sub2+sub3+sub4+sub5;
    float average = (float)aggregate/5;
    
    printf("Aggregate Number is : %d\n",aggregate);
    printf("Average Number is : %f\n",average);
    
    return 0;
}
