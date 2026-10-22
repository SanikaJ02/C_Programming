/*
///////////////////////////////////////////////////////////
Function Name : PrintEven
Description   : Prints the first iNo even numbers
Input         : Integer
Output        : Displays even numbers
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    // Logic
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\n", iCnt * 2);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
