
#include <stdio.h>

void CheckNumberType(int iNo)
{
    if(iNo==0)
    {
        printf("Number is Zero");
    }
    else if(iNo>0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }        
}

int main()

{
    int iValue;
    printf("Enter number: ");
    scanf("%d", &iValue);
    CheckNumberType(iValue);
    return 0;
}