
#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChckVowel(char CValue)
{
    if(CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U'||
        CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n: ");
    scanf("%c", &cValue);

    bRet = ChckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}

