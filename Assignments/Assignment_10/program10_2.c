
#include<stdio.h>

double CircleArea(float fWidth , float fHeight)
{
    // Logic
    double dArea=0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : "); 
    scanf("%f",&fValue1);

    printf("Enter height : "); 
    scanf("%f",&fValue2);

    dRet = CircleArea(fValue1,fValue2);

    printf("The Area of Circle is : %lf\n ",dRet);

    return 0;
}
//Time Complexity = O(1);
