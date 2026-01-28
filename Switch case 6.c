#include <stdio.h>

int main() {
    int amt,stype,tot;
    printf("1.Normal\n");
    printf("2.Express\n");
    scanf("%d%d",&stype,&amt);
    switch(stype){
        case 1:
        tot = 50;
        printf("Delivery Rs.%d",tot);
        break;
        case 2:
        if(amt<1000){
            tot = 100;
            printf("Delivery RS.%d",tot);
        }
        else{
            printf("Free");
        }
        break;
        default:
        printf("Invalid option");
    }
    return 0;
}