/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  LastChar
//  Description:    It is used to return the index of last
//                  occurrence of the entered character in the string.
//                  (If character not found return -1)
//  Input:          char*, char
//  Output:         int (index value)
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
////////////////////////////////////////////////////////////                        
////
int LastChar(char str[],char ch)
{
    
    int iIndex=0;
    int iLast=-1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iIndex;
        }
        str++;
        iIndex++;
    }
    return iLast;
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
    
    iRet=LastChar(Arr,cValue);
    
    printf("Character location is : %d",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
