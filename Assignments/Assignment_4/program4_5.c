
#include <stdio.h>

int FactDiff(int iNo)
{
    //Logic

    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    
    //updator
     if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;         //Sum of factors
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;   //Sum of nonfactors      
        }
    }
    return iSumFact - iSumNonFact;            //Difference between sums
}

int main()

{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}