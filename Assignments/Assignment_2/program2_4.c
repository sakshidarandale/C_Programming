#include <stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt=0;

    //Write Updator
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}