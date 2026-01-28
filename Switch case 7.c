#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d", &a, &b);
    switch (a) {
        case 1:  
            c=4;
            break;
        case 2:  
            if (b<3)
                c=5;
            else
                c=7;
            break;
        default:
            printf("Invalid Account Type");
            return 0;
    }
    printf("Interest %d%%", c);
    return 0;
}