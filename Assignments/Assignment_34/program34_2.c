/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is used to converts the uppercase character 
//                  into lowercase and lowercase character to 
//                  uppercase and displays it
//  Input:          char* (Character array / string)
//  Output:         void (Updates string to lowercase)
//  Author:         Sakshi Ravindra Darandale
//  Date:           30/11/2025
//
////////////////////////////////////////////////////////////////

void Display(char ch)
{
  if((ch>='a')&&(ch<='z'))
  {
    ch=ch-32;
  }
  else if((ch>='A')&&(ch<='Z'))
  {
    ch=ch+32;
  }
  
  printf("%c",ch);
}


////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';
    
    printf("Enter the character : ");
    scanf(" %c",&cValue);
    
    Display(cValue);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
