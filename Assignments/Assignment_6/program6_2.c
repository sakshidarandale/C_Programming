#include <stdio.h>
#include <stdbool.h>

bool ChkGreater(int iNo)
{
// Logic
    if(iNo>100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet =ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Number is greater than 100");
    }
    else
    {
        printf("Number is smaller than 100");
    }
}

//Time Complexity is O(1)