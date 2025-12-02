/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckSmall
//  Description:    It is used to check whether the entered character
//                  is a small case alphabet or not
//  Input:          char
//  Output:         BOOL (TRUE/FALSE)
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
   
    if (ch >= 'a' && ch <= 'z')
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
    
    bRet = CheckSmall(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is a Small case Character");
    }
    else
    {
       printf("It is not a Small case Character"); 
    }
    return 0;
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
