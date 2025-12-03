/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  FirstChar
//  Description:    It is used to return the index of first
//                  occurrence of the entered character in the string.
//                  (If character not found return -1)
//  Input:          char*, char
//  Output:         int (index value)
//  Author:         Sakshi Ravindra Darandale
//  Date:           02/12/2025
//
////////////////////////////////////////////////////////////                        
////
int FirstChar(char str[],char ch)
{
    int iIndex=0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        str++;
        iIndex++;
    }
    return -1;
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
    
    iRet=FirstChar(Arr,cValue);
    
    printf("Character location is : %d",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
