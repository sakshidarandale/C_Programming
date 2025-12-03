/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  CountChar
//  Description:    It is used to count the frequency of the 
//                  entered character in the given string
//  Input:          char*, char
//  Output:         int (count of character)
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
////////////////////////////////////////////////////////////////

int CountChar(char str[],char ch)
{
    int iCount=0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCount++; 
        }
        str++;
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
    char Arr[50] = {'\0'};
    char cValue='\0';
    int iRet=0;
    
    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);
    
    printf("Enter the character: ");
    scanf(" %c",&cValue);
    
    iRet=CountChar(Arr,cValue);
    
    printf("Character frequency is : %d",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
