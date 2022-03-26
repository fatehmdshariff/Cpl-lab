#include<stdio.h>
int main()
{
  int a,i,t=0,j;
  printf("Enter the number of numbers\n");
  scanf("%d", &a);
  int n[a];
  printf("Enter the numbers\n");
  for(i=0;i<a;i++)
    {
      scanf("%d", &n[i]);
    }
  for (i=0;i<a; i++)
  {
    for(j=0;j<a-1-i;j++)
    {
      if(n[j]>n[j+1])
      {
        t=n[j];
        n[j]=n[j+1];
        n[j+1]= t;
      }
     }
  }
  printf("The sorted data is\n");
  for(i=0;i<a;i++)
    {
      printf("%d\n", n[i]);
    }
   return 0;
}