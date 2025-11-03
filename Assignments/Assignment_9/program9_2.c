#include<stdio.h>

int DollarToINR(int iNo)
{
    // Logic
    int iRes=0;

    iRes=iNo*70;

    return iRes;

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n", iRet);
    
    return 0;
}

//Time Complexity is O(1)