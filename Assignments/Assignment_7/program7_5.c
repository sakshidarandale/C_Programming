#include<stdio.h>

void MultipleDisplay(int iNo)
{
    // Logic
    int iCnt=0;

    //updator

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iNo*iCnt); 
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}

//Time Complexity is O(1)
