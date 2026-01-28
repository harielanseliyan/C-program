#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);

    switch (a) {
        case 1:  
            c= 199;
            if (b==11 || b==12) {
                d=20;
            }
            break;
        case 2:  
            c= 399;
            if (b==11 || b==12) {
                d= 20;
            }
            break;
        default:
            printf("Invalid Plan");
            return 0;
    }
    printf("Pay ₹%d", c-d);
    return 0;
}