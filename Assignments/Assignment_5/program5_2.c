/*
///////////////////////////////////////////////////////////
Function Name : CheckLeapYear
Description   : Checks whether the given year is a leap year or not
Input         : Integer
Output        : Displays whether the given year is a leap year or not
Author        : Sanika Jagtap
Date          : 07/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        printf("%d is a leap year \n", iYear);
    }
    else
    {
        printf("%d is not a leap year \n", iYear);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the year: \n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}
