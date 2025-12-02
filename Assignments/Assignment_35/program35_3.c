/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description:    It is used to calculate the difference between
//                  the number of small case and capital letters
//                  in a string
//  Input:          char* 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////

int Difference(char str[])
{
    int iDiff = 0, iSmall = 0, iCapital = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;  
        }
        
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;  
        }
        str++;  
    }
    iDiff = iSmall - iCapital;
    return iDiff;
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
    
    iRet = Difference(Arr);
    
    printf("Difference between small and capital characters is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
