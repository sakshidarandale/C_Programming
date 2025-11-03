
#include<stdio.h>

int main()
{
    char iName[30];

    printf("Please enter full name : ");
    scanf("%[^\n]", iName); 

    printf("Your name is %s", iName);

    return 0;
}
//Time Complexity is O(1)