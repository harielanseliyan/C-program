#include <stdio.h>

int main() {
    int acc,bal,amt;
    scanf("%d \n%d \n%d",&acc,&bal,&amt);
    switch(acc){
        case 1:
        if(bal>=amt){
            printf("transaction successfull");
        }
        else{
            printf("Limit Exceeded");
        }
        break;
        case 2:
        if(amt<=5000){
            printf("transaction successfull");
        }else {
            printf("Limit Exceeded");
        }
        break;
        default:
            printf("Invalid Account Type");
    }
    return 0;
}