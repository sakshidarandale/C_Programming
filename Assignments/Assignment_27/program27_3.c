/////////////////////////////////////////////////////////////////////
//
// Input / Output
// 
//  Input:
//  rows : 3
//  columns : 5
//
//  Output:
//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
//     
/////////////////////////////////////////////////////////////////////

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
//  Description    : To display a Pattern 
//  Input          : integer
//  Output         : void
//  Author         : Sakshi Ravindra Darandale
//  Date           : 21/11/2025
//  
/////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                printf("%d\t",j);
            }
            printf("\n"); 
        }
}

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;
    
    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);
    
    printf("Enter the number of rows : ");
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);
    
    return 0;
}
