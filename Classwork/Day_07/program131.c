#include <stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt=0,iSum=0,iAvg=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
        
        iAvg=iSum/iSize;
    }
    
    return iAvg;
}
int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    
    printf("Enter the number of elements : ");
    scanf("%d",&iLength);
    
    ptr = (int*)malloc(iLength * sizeof(int));
    if(NULL==ptr) //Industrial way of coding     
    {
        printf("Unable to allocate memmory\n");
        return -1;
    }
    
    printf("Enter the elements : \n");
    
    for(iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet=Average(ptr,fLength);
    
    printf("Count of odd  elements  is : %d\n",fRet);
    
    free(ptr);

    return 0;
}