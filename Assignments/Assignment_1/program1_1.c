/*
///////////////////////////////////////////////////////////
Function Name : DivideTwoNumbers
Description   : Divides two numbers and displays the quotient
Input  : int , int
Output : int
Author : Sanika Jagtap
Date   : 22/10/2026
//////////////////////////////////////////////////////////
*/


#include<stdio.h>
#include<stdlib.h>

int Division(int No1, int No2)
{
    int iAns = 0;
    if(No2 == 0)
    {
        return -1;
    }
    iAns = No1 / No2;
    return iAns;
}

int main()
{
    int iRet = 0;

    int iValue1 = 15 , iValue2 = 5;

    iRet = Division(iValue1, iValue2);

    printf("Division is %d",iRet);

    return EXIT_SUCCESS;
}
