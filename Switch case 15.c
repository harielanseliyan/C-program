#include<stdio.h>
int main ()
{
    int a;
  printf("enter the online / ofline:");
  scanf("%d",&a);
  char b;
  printf("enter the r/s:");
  scanf(" %c",&b);
  switch(a)
  {
    case 1:
    if(b=='r')
    printf("5000");
    else if (b=='s')
    printf("3000");
    else  
    printf("invalid input");
    break;
    case 2:
    if(b=='r')
    printf("9000");
    else if (b=='s')
    printf("6000");
       else  
    printf("invalid input");
    break;

  }
    return 0 ;
}