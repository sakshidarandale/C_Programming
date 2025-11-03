#include<stdio.h>

void DisplayNum(int iNo)
{
    //updator
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo<50)
    {
        printf("Number is small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Number is medium");
    }
    else
    {
        printf("Number is large");
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayNum(iValue);
    return 0;
}

//Time Complexity is O(1)
