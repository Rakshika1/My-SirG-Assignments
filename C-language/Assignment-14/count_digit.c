#include<stdio.h>
int main(){
    int count = 0;
    int num;
    printf("enter the number;");
    scanf("%d", &num);
    while(num>0){
        int p;
        num = num / 10;
        count = count + 1;
    }
    printf("%d", count);
}