/*
o-35   fail
35-50  pass class
50-60  Second class
60-70  Third Class
70-100  
*/
#include<stdio.h>
void DisplayClass(float fMarks)
{
  if((fMarks>0.0) && (fMarks<35.0))
  {
      printf("You are fail\n");
  } 
  else if((fMarks>=35.0) && (fMarks<50.0) )
  {
      printf("Pass class\n");
  } 
  else  if((fMarks>=50.0) && (fMarks<60.0) )
  {
      printf("Second class\n");
  } 
  else if((fMarks>=60.0) && (fMarks<70.0) )
  {
      printf("First class\n");
  } 
  else  if((fMarks>=70.0) && (fMarks<=100.0) )
  {
      printf("First class with distinction\n");
  }
  else
  {
      printf("Invalid prcentage");
  }
     
}
int main()
{
    float fPer=0.0;
    printf("Enter the percentage");
    scanf("%f",&fPer);
   DisplayClass( fPer);
    return 0;
}