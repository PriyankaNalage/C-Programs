#include<stdio.h>
#include<stdlib.h>
int Summation(int brr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<=iLength;iCnt++) 
    {
    iSum=iSum+brr[iCnt];
    }
    return iSum;

}
int main()
{
  
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
printf("Enter a size of an array");
scanf("%d",&iSize);  
ptr=(int*)malloc(iSize*sizeof(int));

printf("Enter the values:\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  iRet=Summation(ptr,iSize);
  printf("Addition of numbers is:%d",iRet);
  free(ptr);
    return 0;
}