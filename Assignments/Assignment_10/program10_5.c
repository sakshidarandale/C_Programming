
#include<stdio.h>

double SquareMeter(int iNo)
{
    // Logic
    double dRes=0.0;

    dRes = iNo * 0.0929;

    return dRes;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : "); 
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area of Circle is : %lf\n ",dRet);

    return 0;
}
//Time Complexity = O(1);
