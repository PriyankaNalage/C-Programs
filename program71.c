 #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iLength,int iNo)
{

    int iCnt=0;
     

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]==iNo)
        {
            
           break;         //loop chya baher padto
        }
    if(iCnt==iLength)
    {
        return false;
    }     
    else
    {
        return true;
    }
}
 
    }

int main()
{
   int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iValue=0;
    bool bRet ;
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
  bRet=Search(ptr,iSize,iValue);
 if(bRet==true)
 {
     printf("Element is there in array\n");
 }
 else
 {
     printf("Element is not there in array");
 }
  free(ptr);
    return 0;
}