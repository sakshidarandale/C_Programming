/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckCapital
//  Description:    It is used to check whether the entered character 
//                  is a capital alphabet (A-Z) or not
//  Input:          char
//  Output:         BOOL (TRUE / FALSE)
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
   
    if (ch>='A'&&ch<='Z')
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
    char cValue='\0';
    BOOL bRet=FALSE;
    
    printf("Enter the character : ");
    scanf("%c",&cValue);
    
    bRet=CheckCapital(cValue);
    
    if(bRet==TRUE)
    {
        printf("It is a Capital Character");
    }
    else
    {
       printf("It is not a Capital Character"); 
    }
    return 0;
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
