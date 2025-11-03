#include<stdio.h>

int KmToMeter(int iNo)
{
    // Logic
    int iRes=0;

    iRes=iNo*1000;

    return iRes;

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("Value in meter is : %d\n", iRet);
    
    return 0;
}

//Time Complexity is O(1)