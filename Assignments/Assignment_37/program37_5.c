/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  strrev
//  Description:    It is used to reverse (in place)the given string.
//  Input:          char*
//  Output:         void
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
////////////////////////////////////////////////////////////          
////
void strrev(char str[])
{
    char *start=str;
    char *end=str;
    
    char temp='\0';
    
    while(*end!='\0')
    {
       end++;
    }
    end--;
    
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        
        start++;
        end--;
    }
    
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
   char Arr[50] = {'\0'};
  
   printf("Enter string : \n");
   scanf("%[^'\n']s",Arr);
   
   strrev(Arr);      
   
   printf("Updated string is : %s\n",Arr);

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
