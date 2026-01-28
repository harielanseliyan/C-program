#include <stdio.h>
int main ()
{ int a;
    printf("Enter the work:");
    scanf("%d",&a);
 int b;
    printf("Enter how many  year work:");
    scanf("%d",&b);
    switch(a)
    {
        case 1:
        if(b>3)
        printf("%d",(b*5000)+50000);
        else
        printf("50000");
        break;
        case 2:
        if(b>3)
        printf("%d",(b*5000)+35000);
        else
        printf("35000");
        break;

    }


    return 0;
}