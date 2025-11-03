#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)                   // Even number
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else                                 // Odd number
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    
    return (iEvenFact - iOddFact);          //Difference
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n", iRet);

    return 0;
}
