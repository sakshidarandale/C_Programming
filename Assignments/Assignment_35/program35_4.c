/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckVowel
//  Description:    It is used to check whether a string contains
//                  at least one vowel (a, e, i, o, u)
//  Input:          char* 
//  Output:         BOOL (TRUE if vowel present, FALSE otherwise)
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char str[])
{
   while(*str != '\0')
   {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') )
        
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = FALSE;
    
    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);
    
    bRet = CheckVowel(Arr);
    
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
       printf("There is no Vowel"); 
    }
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
