#include<stdio.h>
int factorial(int);
int main(){
    int a,r;
    printf("enter a number");
    scanf("%d", &a);
    r = factorial(a);
    printf("%d", r);
    return 0;
}

int factorial(int n){
    int p=1;
    if(n==0){
        return 1;
    }
    else{
        
    for (int i = 1; i <= n;i++ ){
        p = p * i;
    }
    return p;
    }
    
}