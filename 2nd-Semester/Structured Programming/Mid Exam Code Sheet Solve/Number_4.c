//The radius of a circle is input through the keyboard. Write a C program to calculate the area and circumference of the circle. area = 3.14 * r * r  

#include <stdio.h>
int main()
{
    float r;
    printf("Give Input - Radius : ");
    scanf("%f", &r);
    
    float area = 3.14 * (r*r);
    float circumference = 2*3.14*r;
    printf("Area and Circumference : %.3f & %.3f", area, circumference);
    
    return 0;
}
