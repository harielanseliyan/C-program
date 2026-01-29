#include <stdio.h>
#include <math.h>

int main() {
    int n, org, dig, sum = 0, digs = 0;
    scanf("%d", &n);
    org = n;
    for (int temp = n; temp > 0; temp = temp / 10) {
        digs++;
    }
    for (int temp = n; temp > 0; temp = temp / 10) {
        dig = temp % 10;
        sum = sum + pow(dig, digs);
    }
    if (sum == org)
        printf("Yes");
    else
        printf("No");

    return 0;
}