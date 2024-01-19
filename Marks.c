// WAP to read the marks of 5 subject and calculate the percentage and print the equivalent grades based upon the condition
// below
#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, percentage;
    printf("Enter the marks of the five subjects \n");
    scanf("%f,%f,%f,%f,%f", &sub1, &sub2, &sub3, &sub4, &sub5);

    if (sub1 < 0 || sub2 < 0 || sub3 < 0 || sub4 < 0 || sub5 < 0)
    {
        printf("Marks cannot be less then Zero (0)");
    }
    else if (sub1 > 100 || sub2 > 100 || sub3 > 100 || sub4 > 100 || sub5 > 100)
    {
        printf("Marks cannot be greater than 100 ");
    }

    if (sub1<35 || sub2<35 || sub3<35 || sub4<35 || sub5<35)
    {
        printf("FAIL");
    }
    else
    {

   
        percentage =(sub1 + sub2 + sub3 +  sub4 + sub5)/5;

        if(percentage>=80 && percentage <=100)
        {
         printf("Grade 'A'");
        }
        else if (percentage>=75 && percentage <80 )
        {
            printf("Grade A-");

        }
        else if (percentage>=70 && percentage<75)
        {
            printf("Grade B+");
        }
        else if (percentage>=65 && percentage<70)
        {
            printf("Grade B");

        }
        else if (percentage>=60 && percentage<64)
        {
            printf("B-");
        }
        else if (percentage>=55 && percentage<60)
        {
            printf("Grade C+");
        }
        else if (percentage>=50 && percentage<55)
        {
            printf("Grade C");
        }
        else if (percentage>=45 && percentage<50)
        {
            printf("Grade C-");
        }
        else if (percentage>=40 && percentage<45)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        }
    }
        

    
}