#include<stdio.h>

int DisplayFactorial(int iNo)
{
    // Logic
    int iCnt=0;
    int iFact=1;

    //updator

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;     
    }
    return iFact; 
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=DisplayFactorial(iValue);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}

//Time Complexity is O(N)
