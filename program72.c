  #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int SearchFirst(int Arr[],int iLength,int iNo)
{

    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]==iNo)
        {
        break;
        } 
       }
       if(iCnt==iLength)
       {
           return -1;

       }
       else{
           return iCnt;
       }
    
}       
int main()
{
   int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iValue=0;
int iRet ;
printf("Enter a size of an array");
scanf("%d",&iSize);  
ptr=(int*)malloc(iSize*sizeof(int));
printf("Enter the values:\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  printf("Enter the element to search");
  scanf("%d",&iValue);
  iRet=SearchFirst(ptr,iSize,iValue);
if(iRet==-1)
{
    printf("There is nosuch element in array\n");
}
else
{
    printf("Element first occurence at:%d",iRet);
}
  free(ptr);
    return 0;
}