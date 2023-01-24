#include<stdio.h>
int chess[6];
int ochess[6]={1,1,2,2,2,8};
int main(){
    int i,j;
    for(i=0;i<=5;i++){
        scanf("%d", &chess[i]);
    }
    for(i=0;i<=5;i++){
        printf("%d ", ochess[i]-chess[i]);
        }
    printf("\n");
    return 0;
}