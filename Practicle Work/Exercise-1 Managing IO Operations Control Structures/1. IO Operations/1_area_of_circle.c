//1. Calculate the area of a circle

#include<stdio.h>
#include<conio.h>

void main()
{
    const float PI = 3.14;
    float Radius;

    printf("Enter the Radius :- ");
    scanf("%f",&Radius);

    float area = PI * Radius * Radius;

    printf("The Area Of Circle Is : %f",area);
}
