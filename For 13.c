#include <stdio.h>

int main(void) {
    int a,b;
    int ans=0;
    scanf("%d %d",&a,&b);
    for (int i=a;i<b;i++) {
        if (i%a==0) {
            ans=ans+i;
        }
    }
    printf("%d",ans);
    return 0;
}