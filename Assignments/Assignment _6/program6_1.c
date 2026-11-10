/*
///////////////////////////////////////////////////////////
Function Name : CalculateBill
Description   : Calculates electricity bill based on units
Input         : Integer (Units consumed)
Output        : Displays total electricity bill
Author        : Sanika Jagtap
Date          : 10/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>

void CalculateBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Units");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter units consumed\n");
    scanf("%d", &iUnits);

    CalculateBill(iUnits);

    return 0;
}
