#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    // Print '*' iNo times
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
         printf("*\t");
    }

    // Print '#' iNo times
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
         printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);
    return 0;
}

//Time Complexity is O(N)
