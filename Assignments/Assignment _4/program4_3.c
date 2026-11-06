/*
///////////////////////////////////////////////////////////
Function Name : CheckEvenOdd
Description   : Checks whether given number is even or odd
Input         : int
Output        : number is even or odd
Author        : Sanika Jagtap
Date          : 23/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FindGreater(int iNo1, int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);

    iRet = FindGreater(iValue1,iValue2);

    printf("Greater number is : %d\n", iRet);

    return EXIT_SUCCESS;
}
