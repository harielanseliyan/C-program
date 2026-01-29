#include <stdio.h>

int main() {
    int num,dig;
    int count = 0;
    scanf("%d", &num);
    for (;num>0;num/= 10) {
        dig = num%10;
        if (dig % 2 == 0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}