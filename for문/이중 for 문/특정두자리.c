#include<stdio.h>
int main(){
    int a,b,c,i,j,sum=0;
    scanf("%d",&c);
    for(i=1; i<=c/10;i++){
        for(j=1; j<i; j++){
            if(i>=j && (i*10)+j<=c){
                printf("%d%d\n",i,j);
                sum = sum +1;
            }
        }
    }
    printf("%d\n",sum);
    return 0
}