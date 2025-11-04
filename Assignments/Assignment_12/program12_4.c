
#include <stdio.h>

int SumOfEvenFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0)) 
        {
           iSum=iSum+iCnt;
        }   
    }
    return iSum;
}
int main()
{
    int iValue;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet=SumOfEvenFactors(iValue);

    printf("Sum of even factors is : %d\n",iRet);

    return 0;
}

//Time Complexity = O(N/2)           