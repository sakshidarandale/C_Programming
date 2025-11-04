#include <stdio.h>

void PrintNumbers(int iNo) 
{
    int iCnt=0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main() 
{
    int iValue;

    printf("Enter the number : \n");
    
    scanf("%d",&iValue);

    PrintNumbers(iValue);

    return 0;
}