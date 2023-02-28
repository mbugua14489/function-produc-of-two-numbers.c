 //function named product that returns product of two numbers
#include<stdio.h>
int main()
{
    int a,b,product;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    //calculating product
    product=a*b;
    // %.2d displays number upto 2 decimal points
    printf("Product=%.2d", product);
    return 0;
}