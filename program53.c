//Accept two numbers from user and display its power
 #include<stdio.h>
 typedef unsigned long int ULONG;
ULONG Power(int iNo1,int iNo2)  //unsigned long int=typedef
 {
    unsigned long int lMult=1;
    register int  iCnt=0;
for(iCnt=1;iCnt<=iNo2;iCnt++)
{
    lMult=lMult*iNo1;
}
return lMult;

}
 int main()
{
   auto int iNum1=0;
    auto int iNum2=0;
    int lRet=0;
    printf("Enter a values of number");
    scanf("%d%d",&iNum1,&iNum2);
    lRet=Power(iNum1,iNum2);
    printf("power of number is:%ld",lRet);
    return 0;
}
 

 //Time Complexity is N