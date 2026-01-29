#include <stdio.h>

int main() {
    int a,b,max,lcm;
    scanf("%d %d", &a,&b);
    if (a>b) {
        max = a;
    } else {
        max = b;
    }
    for (lcm = max; ; lcm += max) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("%d  %d  %d\n", num1, num2, lcm);
            break;
    }

    return 0;
}