#include <stdio.h>

int CountOccurrence(char str[],char ch)
{
    int iCount=0;
    
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCount++;
        }
        str++;
    } 
    return iCount;
}

int main()
{
    char Arr[50]={'\0'};
    int iRet=0;
    char cValue='\0';
    
    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);
    
    fflush(stdin);      //not applicable on all OS(works for specific OS only)
    
    printf("Enter the character : \n");
    scanf("%c",&cValue);
    
    iRet=CountOccurrence(Arr,cValue);
    
    printf("Number of occurrences are :%d\n",iRet);
    
    return 0;
}