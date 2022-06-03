#include<stdio.h>
#include<stdbool.h>
bool isArmstrong(int iNo)
{
    
    int iRem=0;
    int iCnt=0;
    int iMult=1;
    int iTemp=0;
     int i=0;
     if(iNo<0)
     {
         iNo=-iNo;
     }
      iNo=iTemp;
while (iNo<0)
{
   iRem=iNo%10;
   iCnt++;
   iNo=iNo/10;
  
}
 
for(i=0;i<=iCnt;i++)
{
    iMult=iMult*iRem;
}

if(iMult==iTemp)
{
    return true;
}
else
{
    return false;
}


}

int main()
{
    int iValue=0;
    printf("Enter a number");
    scanf("%d",&iValue);
    bool bRet;
    bRet=isArmstrong(iValue);
    if(bRet==true)
    {
        printf("%d is armstrong number",iValue);
    }
    else
    {
       printf("%d is not armstrong number",iValue);
   }

}