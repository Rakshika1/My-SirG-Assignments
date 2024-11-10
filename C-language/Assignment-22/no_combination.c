#include<stdio.h>
int no_combination(int, int);
int main(){
    int k,o,c;
    printf("enter the two numbers");
    scanf("%d %d",&k,&o);
    c = no_combination(k, o);
    printf("%d", c);
    return 0;
}
int factorial(int a){
    int p=1;
    if(a==0){
        return 1;
    }
    else{
        
    for (int i = 1; i <= a;i++ ){
        p = p * i;
    }
    return p;
    }
}

int no_combination(int n,int r){
    int res;
    res = factorial(n) / (factorial(r) * factorial(n-r));
    return res;
}