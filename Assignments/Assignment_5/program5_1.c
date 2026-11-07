/*
///////////////////////////////////////////////////////////
Function Name : FindGreatest
Description   : Finds the greatest of three numbers
Input         : Integer, Integer, Integer
Output        : Displays the greatest number
Author        : Sanika Jagtap
Date          : 07/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("Greatest number is : %d \n", iNo1);
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("Greatest number is : %d \n", iNo2);
    }
    else
    {
        printf("Greatest number is : %d \n", iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
