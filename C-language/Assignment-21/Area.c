#include<stdio.h>
float area(int);
int main(){
    int a,p;
    printf("Enter the radius :", a);
    scanf("%d", &a);
    p = area(a);
    printf("%d", p);
    return 0;
}

float area(int r){
    int c;
    c = 2 * 3.14 * r;
    return c;
}
