//The price of an item and discount percentage are input through the keyboard. Write a C program to calculate the discounted price.   

#include <stdio.h>
int main()
{
    float price, discount;
    printf("Enter Price and Discount amount : ");
    scanf("%f %f", &price,&discount);
    
    float discount2 = (price*discount)/100;
    float final_price = (price - discount2);
    printf("Final Price : %.3f\n", final_price);
    
    return 0;
}
