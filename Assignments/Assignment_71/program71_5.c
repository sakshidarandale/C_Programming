

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse 
//  Description  : Accepts a number from the user and reverses it
//                 using recursion.
//  Input        : int
//  Output       : int (reversed number)
//  Author       : Sakshi Ravindra Darandale
//  Date         : 08/02/2026
//
///////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    static int rev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;        
        rev = rev * 10 + iDigit; 
        Reverse(iNo/10);
    }

    return rev; 
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);

    printf("Reversed Number : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

