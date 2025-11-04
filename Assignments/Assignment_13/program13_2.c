#include <stdio.h>

void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;

    // Input validation
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Even numbers from 1 to %d are:\n", iNo);

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
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
