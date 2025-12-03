/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It prints checks whether a character is special
//                  or not(@,%<#)        
//  Input:          char
//  Output:         BOOL(True/False)
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025
//
/////////////////////////////////////////////////////////////////////

BOOL CheckSpecial(char ch)
{
   
    if ((ch>='A'&&ch<='Z') ||(ch>='a'&&ch<='z'))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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
    
    bRet=CheckSpecial(cValue);
    
    if(bRet==TRUE)
    {
        printf("It is a Special Character");
    }
    else
    {
       printf("It is not a special Character"); 
    }
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
