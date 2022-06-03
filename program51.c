//check number is pailendrom or not
 
#include<stdio.h>
#include<stdbool.h>
bool CheckPailendrom(int iNo)
{
    int iRem=0;
    int iSum=0;
    int iRev=0;
    int iTemp=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   iTemp=iNo;
   
    while(iNo>0)
   {
        iRem=iNo%10;
         iRev=iRev*10+iRem ;
        iNo=iNo/10;
         
    } 
 if(iRev==iTemp)
 {
     return true;
 }
 else{
     return false;
 }
}
int main()
{

    int iValue=0;
 bool iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet= CheckPailendrom(iValue);
 if(iRet==true)
 {
     printf("%d is Pailendrom number",iValue);
 }
 else
 {
 printf("%d is not Pailendrom number",iValue);
 }
}

