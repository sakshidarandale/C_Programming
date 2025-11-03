#include <stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iResult = 1;
    int zeroCount = 0;

    // First number
    if(iNo1 == 0)
    {
        zeroCount++;
    }
    else
    {
        iResult = iResult * iNo1;
    }
    // Second number
    if(iNo2 == 0)
    {
        zeroCount++;
    }
    else
    {
        iResult = iResult * iNo2;
    }

    // Third number
    if(iNo3 == 0)
    {
        zeroCount++;
    }
    else
    {
        iResult = iResult * iNo3;
        printf("iNo3 = %d multiplied, current result = %d\n", iNo3, iResult);
    }

    // Check if all are zero
    if(zeroCount == 3)
    {
        return 0;
    }
    

    return iResult;
}

int main()

{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Please enter the three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is :%d\n",iRet);

    return 0;
}

//Time Complexity O(1)