#include <stdio.h>
int main ()
{
  int a;
  printf("enter the vechicle:");
  scanf("%d",&a);
  int b;
  printf("enter the age:");
  scanf("%d",&b);
  switch(a)
  {
    case 1:
      if (b<=5)
      printf("1500");
      else 
      printf("2500");
      break;
    case 2:
    if(b<=5)
    printf("4000");
    else
    printf("6000");  

  }



    return 0;
}