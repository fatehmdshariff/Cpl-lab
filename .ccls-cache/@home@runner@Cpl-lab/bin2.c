#include <stdio.h>
int main()
{
  int n,i,j,t,m,k,f,l;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("ENter the elemnts of the array\n");
  int a[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i] );
  }
  for (i=0;i<n; i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]= t;
      }
     }
  }
 printf("Enter the key element\n");
 scanf("%d", &k);
 f=0;
 l=n-1;
 m=(f+l)/2;
 while(f<=l)
 {
   if(k==a[m])
   {
     printf("Element %d found at location %d\n", k,m+1);
     return 0;
   }
    else if(k<a[m])
    {
      l=m-1;
    }
    else 
    {
      f=m+1;
    }
   }
   printf("Elemment not found\n");
   return 0;
}