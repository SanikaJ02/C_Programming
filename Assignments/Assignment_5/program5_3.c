/*
///////////////////////////////////////////////////////////
Function Name : DisplayGrade
Description   : Displays the grade based on the marks obtained
Input         : Integer
Output        : Displays the grade
Author        : Sanika Jagtap
Date          : 07/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float iMarks)
{
    if(iMarks < 40)
    {
        printf("Fail \n");
    }
    else if(iMarks >= 40 && iMarks <= 59)
    {
        printf("D Grade \n");
    }
    else if(iMarks >= 60 && iMarks <= 74)
    {
        printf("C Grade \n");
    }
    else if(iMarks >= 75 && iMarks <= 89)
    {
        printf("B Grade \n");
    }
    else if(iMarks >= 90 && iMarks <= 100)
    {
        printf("A grade\n");
    }
    else
    {
        printf("Invalid marks \n");
    }
}

int main()
{
    float fValue = 0.0;

    printf("Enter the marks: \n");
    scanf("%f",&fValue);

    DisplayGrade(fValue);

    return EXIT_SUCCESS;
}
