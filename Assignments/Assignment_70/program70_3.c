
///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Strlen
//  Description:    It is used to accept string from user and 
//                  count number of characters in string using recursion
//  Input:          int 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
////////////////////////////////////////////////////////////////////////

int Strlen(char *str)       //char str[]
{
    static int iCount = 0;

    if(*str != '\0')
    {
      iCount++;
      Strlen(str + 1);
    }

    return iCount;
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    char Arr[20] = {'\0'};

    printf("Enter the string : \n");
    scanf(" %[^\n]", Arr);           // [^\n ]-> NOT Newline (Reads space too)

    iRet = Strlen(Arr);

    printf("Number of characters in string is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

