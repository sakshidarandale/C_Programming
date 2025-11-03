
#include <stdio.h>
void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}
int main()
{
    int iValue;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}