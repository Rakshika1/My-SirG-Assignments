#include<stdio.h>
float interest(int,float,int);
int main(){
    int a,b,c,p;
    printf("enter the 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    p = interest(a,b,c);
    printf("%d", p);
    return 0;
}

float interest(int p,float r,int t){
    int si;
    si = p * r * t/100;
    return si;
}
