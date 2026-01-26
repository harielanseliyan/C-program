#include <stdio.h>

int main() {
   int a,b,c,d;
   printf("Enter the value : ");
   scanf("%d %d",&a,&b);
   c = a /= b;
   printf("%d \n",c);
   d = a %= b;
   printf("%d",d);
   return 0;
}