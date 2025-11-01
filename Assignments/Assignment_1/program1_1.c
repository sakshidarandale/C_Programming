/*

Step1:Understand the problem statement

Step2:Write the algorithm

Step3:Decide the programming language

Step4:Write the program

Step5:Test the program

*/

/*

   Algorithm

   START 
        Accept first number as no1
        Accept second number as no2
        Perform Division of no1 and no2
        Display the Division on screen
   STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  Divide 
//  Description:    It is used to perform division
//  Input:          int,int
//  Output:         int
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/11/2025
////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns=0;

    if(iNo2==0)
    {
        return -1;
    }

    iAns=iNo1/iNo2;

    return iAns;
}

////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;
}