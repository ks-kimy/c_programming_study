#include<stdio.h>
int main(){
    int i,j,k,a ;
    scanf("%d",&a);
    for(i=1; i<=a/2+1;i++){
        for(k=i; k<=a/2; k++){
            printf(" ");
        }
        for(j=1; j<=i;j++){
            printf("@");
        }
        printf("\n");
    }
    for(i=1; i<=a/2; i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=i; k<=a/2; k++){
            printf("@");
        }
        printf("\n");
        
    }
    return 0;
}