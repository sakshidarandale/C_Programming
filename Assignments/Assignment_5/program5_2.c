
#include <stdio.h>

int FindMax(int iNo1, int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}
int main()
{
    int iValue1, iValue2, iRet;

    printf("Enter the number 1: ");
    scanf("%d", &iValue1);

    printf("Enter the number 2: ");
    scanf("%d", &iValue2);

    iRet = FindMax (iValue1,iValue2);
    printf("The Maximum number is %d\n" ,iRet);

    return 0;
}