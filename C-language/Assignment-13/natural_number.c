#include<stdio.h>
int main(){
    int count = 0;
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        count = count + i;
    }
    printf("%d",count);
}