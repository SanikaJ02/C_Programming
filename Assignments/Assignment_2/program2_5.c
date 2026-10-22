/*
///////////////////////////////////////////////////////////
Function Name : CheckEvem
Description   : Checks whether the given number is even or odd
Input         : Integer
Output        : Displays whether the number is even or odd
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}
