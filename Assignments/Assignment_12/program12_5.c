#include <stdio.h>
#include <stdbool.h>

bool IsDivisibleByFive(int iNo)
{

    if(iNo%5==0)
    {
        return true;
    }

    else

    {
        return false;
    }
}

int main()
{
    int iValue;
    int iRet=false;

    printf("Enter the number :  ");
    scanf("%d", &iValue);

    iRet=IsDivisibleByFive(iValue);

    if(iRet==true)
    {
        printf("%d is Divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not Divisible by 5\n", iValue);
    }

    return 0;
   
}

//Time Complexity = O(1)