#include <stdio.h>
#include <math.h>
#define pi 3.412875
int main()
{
int i;
float x,deg,sum,term,num,den;
printf("Enter the degree");
scanf("%f", &deg);
x=(deg)*(pi/180.0);
i=1;
sum=x;
num=x;
den=1.0;
term=x;
do
{
  i=i+2;
  num=-num*x*x;
  den=den*i*(i-1);
  term=num/den;
  sum=sum+term;
}while(fabs(term)>=0.0001);
printf("using inbuilt function sin(%.2f)=%.2f\n",deg,sin(x));
printf("using computed values sin(%.2f)=%.2f\n", deg,sum);
return 0;
}