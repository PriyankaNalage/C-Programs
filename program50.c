//accept number and Display reverse number
 
#include<stdio.h>
int Reverse(int iNo)
{
    int irem=0;
    int iSum=0;
    int irev=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   
    while(iNo>0)
   {
        irem=iNo%10;
         irev=irev*10+irem ;
      
        iNo=iNo/10;
         
    } 
  return irev;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet= Reverse(iValue);
 printf("Reverse number is:%d\n",iRet);
    return 0;
}

