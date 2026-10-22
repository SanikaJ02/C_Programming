
/*
///////////////////////////////////////////////////////////
Function Name : Check
Description   : Checks whether a number is divisible by 5
Input         : Integer
Output        : TRUE if divisible by 5, otherwise FALSE
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(iNo % 5 ==0)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }

    return EXIT_SUCCESS;
}