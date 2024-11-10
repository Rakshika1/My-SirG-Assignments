#include<stdio.h>
int lcm(int);
int main(){
    int a,lcm1;
    printf("enter a number");
    scanf("%d", &a);
    lcm1 = lcm(a);
    printf("%d", lcm1);
    return 0;
}

int lcm(int num){
    int p=1;
    for (int i = 2; i <= num;i++){
        while(num>0){
            if(num%i==0){
                p = p * i;
                num = num / i;
            }
        }
    }
    return p;
}