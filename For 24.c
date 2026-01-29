#include <stdio.h>

int main() {
    int n, org, rev = 0, dig;
    scanf("%d", &n);
    org = n;
    for (; n > 0; n = n / 10) {
        dig = n % 10;
        rev = rev * 10 + dig;
    }
    if (org == rev)
        printf("Yes");
    else
        printf("No");

    return 0;
}