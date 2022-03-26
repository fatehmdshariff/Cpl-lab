# include<stdio.h>

int main()
{
  float unit,total,charge;
  char name[20];

  printf("Enter the name of the customer:");
  fgets(name,20,stdin);

  printf("Enter the used units:");
  scanf("%f",&unit);

  charge=0;

  if(unit>=1 && unit<=200)
  {
    charge=0.8*unit;
  }
  else if(unit>=201 &&unit<=300)
  {
    charge=(0.8*200)+(0.9*(unit-200));
  }
  else if(unit>=300)
  {
    charge=(0.8*200)+(0.9*100)+(1*(unit-300));
  }
  
  total=charge+100;

  if(total>400)
  {
    total=total+(0.15*total);
  }

  printf("\n\nELECTRICITY BILL\n\n");
  printf("Name:%s\n",name);
  printf("No of units:%.2f\n",unit);
  printf("Total Bill Amount:%.2f\n",total);
  return 0;
}