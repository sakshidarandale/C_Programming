
#include <stdio.h>

int SumOfFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
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

    iRet=SumOfFactors(iValue);

    printf("Sum of factors is : %d\n",iRet);

    return 0;
}

//Time Complexity = O(N/2)