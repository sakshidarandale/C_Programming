/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpyCap
//  Description:    It copies the source string into the
//                  destination string by converting all lowercase
//                  characters into uppercase.
//  Input:          char*, char*
//  Output:         void
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////
void StrCpyCap(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a' && *src<='z'))
        {
            *dest=*src-32;
        }
        else
        {
            *dest=*src;   
        }
        src++;
        dest++;
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
    
    StrCpyCap(Arr,Brr);
    
    printf("The updated string is :%s",Brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
