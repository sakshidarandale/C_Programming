/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  CountSmall
//  Description:    It is used to count small case letters in a string
//  Input:          char* 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);
    
    iRet = CountSmall(Arr);
    
    printf("Number of small characters are : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
