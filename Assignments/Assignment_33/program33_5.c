/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplaySchedule
//  Description:    It is used to display exam schedule based on division
//                  (A, B, C, or D)
//  Input:          char 
//  Output:         BOOL (TRUE/FALSE)
//  Author:         Sakshi Ravindra Darandale
//  Date:           27/11/2025
//
////////////////////////////////////////////////////////////////



void DisplaySchedule(char chDiv)
{
    
    if(chDiv == 'A'|| chDiv=='a')
    {
        printf("Exam is at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Exam is at 8:30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Exam is at 9:20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Exam is at 10:30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
  
    
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    
    printf("Enter the division: ");
    scanf("%c", &cValue);
    
    DisplaySchedule(cValue);

    return 0;
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
