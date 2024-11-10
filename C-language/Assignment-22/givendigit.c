#include<stdio.h>
const char* digit(int, int);
int main(){
    int a, b;
    printf("enter the two numbers");
    scanf("%d %d", &a, &b);
    const char *c = digit(a, b);
    printf("%s", c);
    return 0;
}
const char* digit(int num,int dig){
    int p;
    while(num>0){
        p = num % 10;
        if(p == dig){
            return "Yes";
        }
        num = num / 10;
    }
    return "no";
}