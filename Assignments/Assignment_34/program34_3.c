/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It prints characters from the given character up 
//                  to 'Z' if capital, or down to 'a' if small.               
//  Input:          char
//  Output:         void 
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        if(ch>='A' && ch<='Z')
        while(ch <='Z')
        {
            printf("%c ",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c",ch);
            ch--;
        }
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
    
    printf("Enter the character : ");
    scanf(" %c",&cValue);
    
    Display(cValue);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
