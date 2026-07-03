//Niloy’s basic salary is input through the keyboard. His dearness allowance is 40% of his basic salary and house rent is 20% of his basic salary. Write a program to calculate his gross salary. gross_salary=basic_salary+dearness_allowence+house_rent 

#include <stdio.h>
int main()
{
    int basic_salary;
    printf("Enter Basic Salary : ");
    scanf("%d", &basic_salary);
    
    int dearness_allowance = basic_salary * 0.4;
    int house_rent = basic_salary * 0.2;
    
    int gross_salary = basic_salary+dearness_allowance+house_rent;
    
    printf("Gross_Salary is : %d", gross_salary);
    
    return 0;
}
