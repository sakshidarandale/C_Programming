 ///////////////////////////////////////////////////////////////
//   
//  Input :5
//   
//  Output :
//   
//          5   #   4   #   3   #   2   #   1   #
//                         
////////////////////////////////////////////////////////////// 

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////// 
//
//  Function Name  : Pattern 
//  Function Name  : Display
//  Description    : It is used to display numbers in reverse 
//                   order with # in between
//  Input          : integer
//  Output         : void
//  Author         : Sakshi Ravindra Darandale
//  Date           : 21/11/2025
//  
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCount=0;
            
        for(iCount=iNo;iCount>=1; iCount--)
        {
            printf("%d\t",iCount);
        
            printf("#\t");
        }
}

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    
    printf("Enter the number of elemnts : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}
