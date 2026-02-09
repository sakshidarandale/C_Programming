

///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Max
//  Description:    It is used to find the largest digit
//                  of a given number using recursion
//  Input:          int 
//  Output:         int 
//  Author:         Sakshi Ravindra Darandale
//  Date:           08/02/2026
//
////////////////////////////////////////////////////////////////

int MaxDigit(int iNo)
{
   
    static int iMax= 0;
    int iDigit = 0;

    if(iNo != 0)
    {
      iDigit = iNo % 10;

      if(iDigit>iMax)
      {
        iMax = iDigit;
      }

      iNo = iNo/10;

      MaxDigit(iNo);
    }

    return iMax;

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

    iRet = MaxDigit(iValue);

    printf("Largest digit is : %d\n",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////

