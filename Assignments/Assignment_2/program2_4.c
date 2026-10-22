/*
///////////////////////////////////////////////////////////
Function Name : Display
Description   : Displays the first number the specified
                number of times
Input         : Integer, Integer
Output        : Displays the first number iFrequency times
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write Updater
    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);


    return EXIT_SUCCESS;
}