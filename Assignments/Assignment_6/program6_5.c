#include<stdio.h>

float CalcPercentage(float fTMarks,float fOMarks)
{
    // Logic

    float fPercentage=0.0;
    
    if(fTMarks == 0)
    {
        return 0.0;
    }

    fPercentage=(fOMarks/fTMarks)*100;
    return fPercentage;
}

int main()
{
    float fValue1 = 0,fValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks");
    scanf("%d",&fValue1);

    printf("Please enter obtained marks");
    scanf("%d",&fValue2);

    fRet =CalcPercentage(fValue1,fValue2);
    printf("%f Percentage is",fRet);

    return 0;
}

//Time Complexity O(1)