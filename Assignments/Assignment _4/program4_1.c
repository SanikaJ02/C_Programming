/*
///////////////////////////////////////////////////////////
Function Name : CheckNumber
Description   : Checks whether given number is positive or negative
Input         : int
Output        : number is positive or negative
Author        : Sanika Jagtap
Date          : 23/10/2026
//////////////////////////////////////////////////////////
*/
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo>0)
    {
        printf("It is positive number\n");
    }
    else{
        printf("It is negative number\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
