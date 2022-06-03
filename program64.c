#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[],int iLength)
{
    printf("Even elements are:");
    int iCnt=0;
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
     if(Arr[iCnt]%2==0)
     {
     printf("%d\n",Arr[iCnt]);
     }
 }

}
int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0;
    printf("Enter number of elements");
scanf("%d",&iSize);

ptr=(int*)malloc(iSize*sizeof(int));
printf("Enter the values of array:\n");
for(iCnt=0;iCnt<iSize;iCnt++)
{
    scanf("%d",&ptr[iCnt]);
    
}
DisplayEven(ptr,iSize);
free(ptr);
return 0;
}
