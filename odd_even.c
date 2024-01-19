// WAP that reads a number and identifies whether the given number is even or odd 
#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the Integer ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an  even numbers ",a);

    }
    else 
    {
        printf("%d is a odd numbers ",a);
    }
}