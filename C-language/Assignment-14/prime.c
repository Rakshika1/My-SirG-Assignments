#include<stdio.h>
int main(){
    int i, s, n;

    printf("enter the number;");
    scanf("%d", &n);
    for (i = 2; i < n;i++){
        if(n%i==0){
            printf("Not prime");
            break;
        }
        if(i==n){
                printf("prime");
        }
        printf("\n");
        return 0;
    }
}