#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    printf("%d",sum_of_squares);
    return 0;
}