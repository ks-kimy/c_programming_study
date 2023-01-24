#include<stdio.h>
int main(){
    int i,j,k,a ;
    scanf("%d",&a);
    for(i=1; i<=a;i++){
        for(k=i; k<a; k++){
            printf(" ");
        }
        for(j=1; j<=i;j++){
            printf("@");
        }
        printf("\n");
    }
    return 0;
}