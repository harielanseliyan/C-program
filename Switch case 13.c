#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the lone type:");
    scanf("%d",&a);
    int b;
    printf("Enter the score:");
    scanf("%d",&b);
    switch(a)
    {
     
        case 1:
            if(b>=650 && b<=699)
            printf("manual reviwe");
            else if (b>=700)
            printf("approved");
            break;
        case 2:
            if (b>700)
            printf("approved");
            else
            printf("rejected");    

    }

    return 0;
}