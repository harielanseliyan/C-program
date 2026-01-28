#include <stdio.h>

int main() {
    int conn,unit;
    int b;
    scanf("%d",&conn);
    scanf("%d",&unit);
    switch(conn){
        case 1: 
            if (unit<= 100) {
                b=unit*3;
            } else {
                b=(100*3)+((unit-100)*5);
                b=b-80;
            }
            break;
        case 2: 
            if (unit<= 100) {
                b=unit* 7;
            } else {
                b=(100*7)+((unit -100)*10);
            }
            break;
        default:
            printf("Invalid Connection Type");
            return 0;
    }
    printf("BILL %d",b);
    return 0;
}