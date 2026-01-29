#include <stdio.h>

int main(void) {
    int n,dig,rev;
    int sum=0;
    scanf("%d",&n);
    for (int i=n;i>0;i=i/10) {
        dig=i%10;
        sum=sum + dig;
    }
    printf("%d",sum);
    return 0;
}