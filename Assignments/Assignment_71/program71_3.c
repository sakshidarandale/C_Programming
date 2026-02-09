
///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name:  SmallCharCount
//  Description:    It is used to accept a string from the user and
//                  count the number of small characters in the string
//                  using recursion.
//  Input:          char * 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
////////////////////////////////////////////////////////////////////////

int SmallCharCount(char *str)       //char str[]
{
    static int iCount = 0;
    char ch = {'\0'};

    if(*str != '\0')         
    {
        if(*str >= 'a' && *str <='z')
        {
            iCount++;
        }
        SmallCharCount(str + 1);   //Recursive call   
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
    scanf(" %[^\n]", Arr);          

    iRet = SmallCharCount(Arr);

    printf("Number of small characters  in string is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

