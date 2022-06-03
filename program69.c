

#include<stdio.h>
#include<stdlib.h>
int CountFrequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iFre=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
            iFre++;
            
        }
    }
    return iFre;


}
int main()
{
   int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iValue=0;
    int iRet=0;
printf("Enter a size of an array");
scanf("%d",&iSize);  
ptr=(int*)malloc(iSize*sizeof(int));
printf("Enter the values:\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  printf("Enter the element to calculate frequency");
  scanf("%d",&iValue);
  iRet=CountFrequency(ptr,iSize,iValue);
  printf("Frequency is:%d",iRet);
  free(ptr);
    return 0;
}