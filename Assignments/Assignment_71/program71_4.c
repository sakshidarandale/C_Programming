
///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name:  Min
//  Description:    It is used to find the smallest digit
//                  of a given number using recursion.
//  Input:          int                                           
//  Output:         int                                       
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
///////////////////////////////////////////////////////////////////

int MinDigit(int iNo)
{
    
    int iDigit = 0;

    if(iNo/10 == 0)
    {
        return iNo;
    }

    iDigit = iNo % 10;

    int iMin = MinDigit(iNo/10);

    if(iDigit < iMin)
    {
        return iDigit;
    }
    else
    {
        return iMin;
    }
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

    iRet = MinDigit(iValue);

    printf("Smallest digit is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

