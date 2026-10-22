
/*
///////////////////////////////////////////////////////////
Function Name : Print
Description   : Prints asterisks based on the input number
Input         : Integer
Output        : * printed on separate lines based on the input number
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void Print(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Print(iValue);

    return EXIT_SUCCESS;
}
