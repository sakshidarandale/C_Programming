/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpyX
//  Description:    It copies the source string into the
//                  destination string in reverse order and removes the whitespaces
//  Input:          char* , char* 
//  Output:         void 
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////               

void StrCpyX(char *src,char *dest)
{

    char *end=src;
    

    while(*end!='\0')
    {
       end++;
    }
    end--;
    
    while(src<=end)
    {
        if(*end!= ' ')
        {
            *dest=*end;
            dest++;
        }
        
        end--;
    }
    *dest='\0';
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    
    char Brr[50]={'\0'};
    
    printf("Enter the string : ");
    scanf("%[^'\n']s", Arr);
    
    StrCpyX(Arr,Brr);
    
    printf("The reversed string without spaces is :%s",Brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
