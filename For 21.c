#include <stdio.h>

int main() {
    int b,dec = 0, base= 1, rem;
    scanf("%d", &b);
    for (; b> 0; binary = binary / 10) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
    }
    printf("%d", decimal);
    return 0;
}