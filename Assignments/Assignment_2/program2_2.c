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
    iNo = -iNo;
    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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