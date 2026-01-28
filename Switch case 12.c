#include <stdio.h>
int main ()
{  
    int a ;
    printf("Enter the vehical type:");
    scanf("%d",&a);
    int b ;
    printf("Enter the trip:");
    scanf("%d",&b);
  
    switch(a)
    {
    case 1:
       if (b>=2 && b<=10)
       printf("  Monthly Pass");
       else if(b>10)
        printf("  Monthly Pass");
        else 
        printf("100");
        break;
    case 2 :2
       if(b>=2 && b<=10)
       printf("%d",b*240);
       else if(b>10)
       printf("%d",b*240);
       else
       printf("240");
       break;

    }
  

    return 0 ;
}