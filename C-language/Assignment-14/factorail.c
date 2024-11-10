#include<stdio.h>
int main(){
    int fact = 1;
    int num;
    printf("enter the number;");
    scanf("%d", &num);
    if(num==1 || num ==0){
        printf("1");
    }
    else{
        for (int i = 1; i <= num;i++){
        fact = fact * i;
    }
    }
    
    printf("%d", fact);
}