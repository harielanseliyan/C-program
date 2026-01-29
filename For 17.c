#include <stdio.h>
int main() {
    int n,temp,dig,fact,sum=0;
    scanf("%d",&n);
    temp=n;
    for(;temp>0;temp/=10){
        dig = temp%10;
        fact=1;
        for(int i=1;i<=dig;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(sum==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}