#include <stdio.h>

int main(void) {
    int n,dig;
    int rev=0;
    scanf("%d",&n);
    for (int i=n;i>0;i=i/10) {
        dig=i%10;
        rev = rev * 10 + dig;
        }
    printf("%d",rev);
    return 0;
}