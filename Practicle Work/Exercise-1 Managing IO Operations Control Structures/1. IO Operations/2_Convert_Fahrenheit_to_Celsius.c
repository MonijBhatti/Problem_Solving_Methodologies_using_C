//2. Convert temperature from Fahrenheit to Celsius.

#include<stdio.h>
#include<conio.h>

void main()
{
    float F, C;

    printf("Enter The Fahrenheit :");
    scanf("%f",&F);

    C = (F - 32) * 5 / 9;

    printf("The Celsius Is : %f", C);
}
