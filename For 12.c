#include <stdio.h>

int main(void) {
    int n,p;
    int ans=1;
    scanf("%d %d",&n,&p);
    for (int i=1;i<=p;i++) {
        ans=ans*n;
    }
    printf("%d",ans);
    return 0;
}