///////////////////////////////////////////////////////////////
//   
//  Input :4
//   
//  Output :
//   
//    #  1  *  #   2  *  #   3  *   #  4   *  
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
//  Description    : It displays numbers from 1 to iNo with # before
//                   each number and * after each number in between
//  Input          : integer
//  Output         : void
//  Author         : Sakshi Ravindra Darandale
//  Date           : 21/11/2025
//  
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;
            
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            printf("#\t");
            printf("%d\t",iCnt);
            printf("*\t");
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
