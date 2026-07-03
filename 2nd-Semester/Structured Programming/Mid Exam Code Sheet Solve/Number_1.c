//The temperature of a city in Fahrenheit degrees is input through the keyboard. Write a C program convert this temperature into Centigrade degrees. fahrenheit=(celcius*9/5)+32 

#include <stdio.h>
int main()
{
    float farenheight;
    printf("Give The Input in Farenheight : ");
    scanf("%f",&farenheight);
    
    float celsius = (farenheight-32)*5/9;
    printf("Temperature in Celcius is %.3f", celsius);
    return 0;
}
