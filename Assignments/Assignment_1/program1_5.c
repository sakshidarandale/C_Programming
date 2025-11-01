#include <stdio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(int i=0;i<iNo;i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    Accept(iValue);

    return 0;
}