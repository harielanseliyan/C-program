#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the room type:");
    scanf("%d",&a);
    char b;
    printf("Enter the season:");
    scanf(" %c",&b);

     switch(a)
     {
     case 1:
     if (b=='a')
     printf("2500");
      else if(b=='b')
      printf("2000");
      else 
     printf("invalid input");
     break;
     case 2:
     if(b=='a')
     printf("4000");
      else if(b =='b')
     printf("3000");
      else 
      printf("invalid input");
     break;
         
     } 
    return 0;
}