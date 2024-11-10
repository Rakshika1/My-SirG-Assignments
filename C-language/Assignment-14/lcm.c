#include<stdio.h>
int main(){
    int a ,b;
    printf("enter the number;");
    scanf("%d %d", &a,&b);
    int L;
    L = a > b ? a : b;
    for ( L =a>b?a:b; L<=a*b;L++){
        if(L%a==0&&L%b==0){
            break;
        }
        printf("%d", L);
        printf("\n");
        return 0;
    }
}