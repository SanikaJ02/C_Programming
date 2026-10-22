/*
///////////////////////////////////////////////////////////
Function Name : Display
Description   : Displays '*' iNo times
Input         : Integer
Output        : Prints '*' on screen
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

 
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
