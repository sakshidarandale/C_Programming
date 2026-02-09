
///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Sum
//  Description:    It is used to calculate the sum of digits
//                  of a given number using recursion
//  Input:          int 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
   
    static int iSum = 0;
    static int iDigit = 0;

    if(iNo != 0)
    {
      iDigit = iNo % 10;
      iSum = iSum + iDigit;
      iNo = iNo/10;

      Sum(iNo);
    }

    return iSum;
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

    iRet = Sum(iValue);

    printf("Sum of digits is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

