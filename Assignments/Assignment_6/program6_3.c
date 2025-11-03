#include <stdio.h>
#include <stdbool.h>

bool ChkEqual(int iNo1,int iNo2)
{
// Logic
    if(iNo1==iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = false;

    printf("Please enter number1 : ");
    scanf("%d",&iValue1);

    printf("Please enter number2 : ");
    scanf("%d",&iValue2);

    bRet =ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Numbers are equal");
    }
    else
    {
        printf("Numbers are not equal");
    }
}

//Time Complexity is O(1)