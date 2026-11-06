/*
///////////////////////////////////////////////////////////
Function Name : CheckVotingEligibility
Description   : Checks whether a person is eligible for voting
Input         : Integer (Age)
Output        : Displays voting eligibility or invalid age
Author        : Sanika Jagtap
Date          : 06/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid age \n");
        return;
    }
    else if(iAge >= 18)
    {
        printf("Elligible for voting \n");
    }
    else
    {
        printf("Not Elligible for voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter the age: \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
