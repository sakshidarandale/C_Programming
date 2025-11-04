#include <stdio.h>

void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    PrintEvenNumbers(iValue);

    return 0;
}
