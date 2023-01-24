#include<stdio.h>

int plus(int a, int b){
    
    printf("두 정수의 합은 : %d 입니다.\n", a+b);
    return a+b;
}
int minus(int a , int b){
    printf("두 정수의 차는 : %d 입니다.\n", a-b);
    return a-b;
}
int multi(int a, int b){
    printf("두 정수의 곱은 : %d 입니다.\n", a*b);
    return a*b;
}
int divide(int a, int b){
    printf("두 정수의 나누기는 : %d 입니다.\n", a/b);
    return a/b;
}
int main(){
    int a,b,k,l,m,n;
    scanf("%d %d", &a,&b);

    k = plus(a, b);
    l = minus(a,b);
    m = multi(a,b);
    n = divide(a,b);
    return 0;
    
}