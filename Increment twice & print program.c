#include <stdio.h>

int main() {
   int a,b,c;
   printf("Enter the value : ");
   scanf("%d",&a);
   b= ++a;
   c= ++a;
   printf("%d",c);
   return 0;
}