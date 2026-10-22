/*
///////////////////////////////////////////////////////////
Function Name : DisplayConvert
Description   : Converts lowercase to uppercase and
                uppercase to lowercase
Input         : Character
Output        : Displays the converted character
Author        : Sanika Jagtap
Date          : 22/10/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}