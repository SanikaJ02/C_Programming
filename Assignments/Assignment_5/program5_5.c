/*
///////////////////////////////////////////////////////////
Function Name : CheckCharacter
Description   : Checks whether a character is uppercase,
                lowercase, digit or special character
Input         : Character
Output        : Displays the type of character
Author        : Sanika Jagtap
Date          : 10/11/2026
//////////////////////////////////////////////////////////
*/

#include<stdio.h>

void CheckCharacter(char CValue)
{
    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((CValue >= '0') && (CValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    CheckCharacter(cValue);

    return 0;
}
