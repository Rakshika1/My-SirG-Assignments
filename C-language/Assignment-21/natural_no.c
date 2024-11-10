#include<stdio.h>
void natural(int);
int main(){
    int p;
    printf("enter the number");
    scanf("%d", &p);
    natural(p);
    return 0;
}

void natural(int n){
    for(int i = 1; i < n;i++){
        printf("%d", i);
    }
}