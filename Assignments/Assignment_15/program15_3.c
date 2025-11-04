#include<stdio.h>

int CountRange(int iNo)
{

    // Logic
    int iDigit=0;
    int iCount=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo==0)
    {
        return 0;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;

        if((iDigit>3) && (iDigit<7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);

     printf("The count of digit greater than 3 and less than 7 is: %d\n", iRet);
    return 0;
}