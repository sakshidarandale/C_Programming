/////////////////////////////////////////////////////////////////////
//
// Input / Output
// 
//  Input:
//  rows : 4
//  columns : 4

//  Output:
//  A A A A
//  B B B B
//  C C C C
//  D D D D
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
        
    char ch='A';

    for(i = 1 ; i <= iRow; i++) 
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);      
        }
        ch++;
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
