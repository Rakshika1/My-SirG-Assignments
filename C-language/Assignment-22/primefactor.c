#include<stdio.h>
void primefactor(int);
int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);
    primefactor(a);
    return 0;
}

void primefactor(int num){
    for (int i = 2; i <= num;i++){
        while(num%i==0){
            printf("%d", i);
            num = num / i;
        }
    }
}