#include <stdio.h>
int main()
{
  int a,b;
  float result;
  char op;
  printf("enter 2 numbers ot be used\n");
  scanf("%d%d", &a, &b);
  printf("enter the operand that needs to be used\n");
  scanf(" %c", &op);
  if(op == '+')
  {
    result= a+b;
    printf("the result = %f\n", result);
  }
  else if(op== '-')
  {
    result= a-b;
    printf("the result = %f\n", result);
  }
  else if(op== '*')
  {
    result = a*b;
    printf("the result = %f\n", result);
  }
  else if(op== '/')
  {
    if(b==0)
    {
      printf("enter a non zero number\n");
      }
    else 
    {
    result= a/b;
    printf("the result = %f\n", result);
  }
  }
  }