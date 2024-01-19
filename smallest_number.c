//WAP to find the Smallest number among three numbers.

#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the first numbers \n Second numbers \n Third numbers \n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d is a smallest numbers ",a);
    }
    else if (b<a && b<c)
    {
        printf("%d is a smallest numbers ",b);
    }
    else{
        printf("%d is a smallest numbers ",c);
    }
    return 0;
}