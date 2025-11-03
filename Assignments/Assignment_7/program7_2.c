#include<stdio.h>

void Pattern(int iNo)
{
    // Logic
    int iCnt=0;

    //updator

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

//Time Complexity is O(N)
