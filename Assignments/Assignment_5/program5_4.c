/*
///////////////////////////////////////////////////////////
Function Name : CheckMultipleDivisibility
Description   : Checks whether number is divisible by 3 and 5
Input         : Integer
Output        : Displays whether number is divisible by 3 and 5
Author        : Sanika Jagtap
Date          : 10/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        printf("Number is divisible by both 3 and 5 \n");
    }
    else
    {
        printf("Number is not divisible by both 3 and 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}

