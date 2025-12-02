/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  strtoggleX
//  Description:    It is used to convert all lowercase letters in
//                  a string to uppercasecase
//  Input:          char* 
//  Output:         void 
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025
//
////////////////////////////////////////////////////////////////

void strtoggleX(char str[])
{
   while(*str != '\0')
   {
        if(*str >= 'a' && *str <= 'z')
        {
            *str=*str+32;
        }
        
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str=*str-32;
        }
        
        str++;
   }
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    
    printf("Enter the string : ");
    scanf(" %[^'\n']s", Arr);
    
    strtoggleX(Arr);
    
    printf("Updated string is: %s\n", Arr);
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
