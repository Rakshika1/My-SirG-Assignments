#include<stdio.h>
int even(int);

int main(){
    int a,p;
    printf("enter the a number");
    scanf("%d ",&a);
    p = even(a);
    printf("%d",p);
}

int even(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
