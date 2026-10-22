/*
///////////////////////////////////////////////////////////
Function Name : DisplayEvenFactor
Description   : Displays all even factors of a number
Input         : Integer
Output        : Displays even factors of the number
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}