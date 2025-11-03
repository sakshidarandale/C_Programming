
#include<stdio.h>

float FhtToCs(float fTemp)
{
    // Logic
    double dRes=0.0;

    dRes=(fTemp - 32.0)*(5.0/9.0);

    return dRes;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter Temperature : ");
    scanf("%f",&fValue);

    dRet = FhtToCs(fValue);

    printf("The Temperature in Celsius is : %lf\n", dRet);
    
    return 0;
}

//Time Complexity is O(1)