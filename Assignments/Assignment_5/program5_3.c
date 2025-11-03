
#include <stdio.h>

void CheckLeapYear(int iYear)

{
    if( (iYear%400)==0 )
    {
        printf("%d is a Leap Year\n", iYear);
    }

    else if((iYear%100)==0)
    {
        printf("%d is NOT a Leap Year\n", iYear);

    }
    else if((iYear%4)==0)
    {
         printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is NOT a Leap Year\n", iYear);
    }


}

int main()

{
    int Year;

    printf("Enter year: ");
    scanf("%d", &Year);

    CheckLeapYear(Year);
    return 0;
}