
#include <stdio.h>

int FindMax(int iNo1, int iNo2,int iNo3)
{
    if(iNo1>iNo2 && iNo1>iNo3)
    {
        return iNo1;
    }
    else if(iNo2>iNo3)
    {
        return iNo2;
    }

    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1, iValue2, iValue3, iRet;

    printf("Enter the number 1: ");
    scanf("%d", &iValue1);

    printf("Enter the number 2: ");
    scanf("%d", &iValue2);

     printf("Enter the number 3: ");
    scanf("%d", &iValue3);

    iRet = FindMax (iValue1, iValue2, iValue3);
    printf("The Maximum number is %d\n" ,iRet);

    return 0;
}