#include <stdio.h>

int main() {
    int mark, att;
    scanf("%d %d", &mark, &att);
    if (att<75) {
        printf("Fail");
    }
    else if (mark>= 75) {
        printf("Distinction");
    }
    else if (mark>=50) {
        printf("Pass");
    }
    else {  
        printf("Fail");
    }
    return 0;
}