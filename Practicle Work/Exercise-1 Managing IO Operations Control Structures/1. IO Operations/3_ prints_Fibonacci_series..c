//3.	Create a program that prints the Fibonacci series.

#include <stdio.h>
#include<conio.h>

void main()
{
    int num, first=0, second=1, next;

    printf("Enter the Any Number : ");
    scanf("%d",&num);

    printf("The Fibonacci Series :\n");

    for(int i=0; i<num; i++)
    {
        printf("%d\t",first);

        next= first + second;
        first = second;
        second = next;

    }
}
