/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigits
//  Description:    It is used to extract all digits from string
//                  and remove other characters
//  Input:          char*
//  Output:         void
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025c
//
////////////////////////////////////////////////////////////////

void DisplayDigits(char str[])
{
    char *start=str;
    char *dest=str;
    
   while(*start != '\0')
   {
        if(*start >= '0' && *start <= '9')
        {
            *dest=*start;
            dest++;
        }
        start++;
   }
   *dest='\0';    
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter the string : ");
    scanf("%[^\n]", Arr);
    
    DisplayDigits(Arr);
    
    printf("Updated string is: %s\n", Arr);
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
