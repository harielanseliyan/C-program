include <stdio.h>

int main(void) {
    int n,eve;
    scanf("%d",&n);
    for (int i=n;i<=n*10;i=i+n) {
            printf("%d ",i);
        }
    return 0;
}