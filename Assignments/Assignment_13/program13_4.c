#include <stdio.h>

int SumNaturalNumbers(int iNo)
{
    int iCnt = 0;
    int iSum=0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    { 
        iSum=iSum+iCnt;
    }

    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet=0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=SumNaturalNumbers(iValue);

    printf("Sum of first %d natural numbers is : %d\n",iValue,iRet);

    return 0;
}

//Time Complexity = O(N)
