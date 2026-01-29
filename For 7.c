#include <stdio.h>

int main(void) {
    int n;
    int sum=0;
    scanf("%d",&n);
    for (int i=2;i<=n;i=i+2) {
        sum=sum+i;
        }
    printf("%d",sum);
    return 0;
}