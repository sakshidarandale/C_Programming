/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name:  StrCpySmall
//  Description:    It copies the source string into the
//                  destination string by converting all uppercase
//                  characters into lowercase.
//  Input:          char* , char*
//  Output:         void
//  Author:         Sakshi Ravindra Darandale
//  Date:           01/12/2025
//
///////////////////////////////////////////////////////////////
void StrCpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='A' && *src<='Z'))
        {
            *dest=*src+32;
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
    
    StrCpySmall(Arr,Brr);
    
    printf("The updated string is :%s",Brr);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
