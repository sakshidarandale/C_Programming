#include<stdio.h>

void DisplayTable(int iNo)
{
    // Logic
    int iCnt=0;
    
    //updator

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=10;iCnt>=1;iCnt--)
    {
       printf("%d\t",iNo*iCnt);     
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    return 0;
}

//Time Complexity is O(N)
