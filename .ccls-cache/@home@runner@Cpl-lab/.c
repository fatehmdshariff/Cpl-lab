#include <stdio.h>
#include<math.h>
int main() 
  {
    float a,b,c,d, r1,r2,real,img;
    printf("Enter value of the coeffecients in order\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
     printf(" Enter correct coeffecients");
     return 1;
    }
    d=(b*b)-(4.0*a*c);
   
    if(d>0)
    {
      printf("The roots are real and distinct\n");
      r1= (-b+sqrt(d))/(2.0*a);
      r2= (-b-sqt(d))/(2.0*a);
      printf(" The roots are %f%f\n",r1,r2);
    }
    else if(d==0)
    {
      printf("The roots are real and Equal\n");
      r1= r2 = -b/(2.0*a);
      printf("The roots are equal and the roots are %f%f\n", r1, r2);
    }
    else
    {
      real= (-b)/(2.0*a);
      img= sqrt(-d)/(2.0*a);
      printf(" The roots are\n");
      printf(" Root 1=%f + i %f\n", real, img);
      printf("Root 2= %f - i %f\n", real, img);

    }
  return 0;
}  