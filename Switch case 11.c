#include <stdio.h>
int main ()
{
  int a;
  printf("Enter the plan type:");
  scanf("%d",&a);
  int b;
  printf("Enter the data used:");
  scanf("%d",&b);
  switch(a)
  {
    case 1:
      if (b<=1)
      printf("normal speed");
     else if (b>1)
     printf("reduce speed");
     break;
     case 2:
      if (b<=2)
      printf("normal speed");
      else if (b>2)
      printf("extra charge"); 
  }

    return 0;
}