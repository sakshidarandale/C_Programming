
/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  CountSpaces
//  Description:    It is used to count the number of space
//                  characters present in the given string
//  Input:          char*
//  Output:         void
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025
//
////////////////////////////////////////////////////////////////

void CountSpaces(char str[])
{
    int iCount=0;
    
    while(*str != '\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
        str++;
    }  
    
    printf("Number of spaces characters are : %d\n",iCount);
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
    
    CountSpaces(Arr);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
