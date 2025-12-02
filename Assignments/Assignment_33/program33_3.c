/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckDigit
//  Description:    It is used to check whether the entered character
//                  is a digit or not
//  Input:          char
//  Output:         BOOL (TRUE/FALSE)
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
   
    if (ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter the character : ");
    scanf("%c", &cValue);
    
    bRet = CheckDigit(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is a Digit ");
    }
    else
    {
       printf("It is not a Digit"); 
    }
    return 0;
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
