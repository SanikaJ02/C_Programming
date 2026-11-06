/*
///////////////////////////////////////////////////////////
Function Name : CheckDivisibility
Description   : Checks whether number is divisible by 5 or not
Input         : Integer 
Output        : Displays whether number is divisible by 5 or not
Author        : Sanika Jagtap
Date          : 06/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is divisible by 5 \n");
    }
    else
    {
        printf("Number is not divisible by 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
