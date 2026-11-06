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

bool CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("It is even number\n");
    }
    else{
        printf("It is odd number\n");
    }


    return EXIT_SUCCESS;
}
