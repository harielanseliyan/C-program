#include <stdio.h>

int main() {
   int a,b,c,d;
   printf("Enter the value : ");
   scanf("%d %d",&a,&b);
   c=a&&b && a||b;
   printf("%d",c);
   return 0;
}