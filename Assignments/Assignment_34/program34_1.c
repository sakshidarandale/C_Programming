#include <stdio.h>

void DisplayASCII(char ch)
{
    int iCnt=0;
    
    printf("---------------------------------------------------------");
    printf("ASCII Table:Symbol | Decimal | Hexadecimal | Octal\n");
    printf("---------------------------------------------------------");
    
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        if(iCnt>0 && iCnt<=31)
        {
            printf("|%-6c|%-7d|%-11x|%-5o|\n",' ',iCnt,iCnt,iCnt);
        }
        else
        {
            printf("|%-6c|%-7d|%-11x|%-5o|\n",' ',(char)iCnt,iCnt,iCnt,iCnt);

        }
    }
    printf("---------------------------------------------------------");
}

int main()
{
    
    DisplayASCII();
    
    return 0;
}