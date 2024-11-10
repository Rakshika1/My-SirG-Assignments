#include<stdio.h>
void odd_natural(int);
int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);
    odd_natural(a);
    return 0;
}
void odd_natural(int n){
    for (int i = 0; i < n;i++){
        if(i%2 != 0){
            printf("%d", i);
        }
    }
}