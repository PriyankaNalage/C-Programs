#include<stdio.h>
void Display(int ptr[])
{
    int iCnt=0;
printf("Elements of array is:\n");
for (iCnt=0;iCnt<5;iCnt++)
{ 
printf("%d",*ptr);
ptr++;
}

}

int main()
{
auto int Arr[5];
int iCnt=0;
printf("Enter elements:\n");
for (iCnt=0;iCnt<5;iCnt++)
{
scanf("%d",&Arr[iCnt]);
}  

    Display(Arr);
}