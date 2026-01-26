#include <stdio.h>

int main() {
   int a,b,c,d;
   printf("Enter the value : ");
   scanf("%d %d %d",&a,&b,&c);
   c = a+b+c;
   printf("%d",c);
   return 0;
}