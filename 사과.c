#include<stdio.h>

int main(){
    int apple,n,i,minus=0 ,q,r,class;
    scanf("%d", &class);
    for(i=1; i<=class; i++){
        scanf("%d %d", &n, &apple);
        minus = minus + (apple%n);
    }
    printf("%d\n", minus);
    return 0;
}