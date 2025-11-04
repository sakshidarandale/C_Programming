#include <stdio.h>

int SumEvenNaturalNumbers(int iNo)
{
    int iCnt = 0;
    int iSum=0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet=0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet=SumEvenNaturalNumbers(iValue);

    printf("Sum of first %d even natural numbers is : %d\n",iValue,iRet);

    return 0;
}

//Time Complexity = O(N)
