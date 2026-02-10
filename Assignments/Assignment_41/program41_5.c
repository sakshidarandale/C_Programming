
///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Mult
//  Description:    It is used to calculate the product of digits
//                  in a given number using recursion
//  Input:          int 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
   
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
      iDigit = iNo % 10;
      iMult = iMult *  iDigit;
      iNo = iNo/10;

      Mult(iNo);
    }

    return iMult;
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

    iRet = Mult(iValue);

    printf("Product of digits is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

