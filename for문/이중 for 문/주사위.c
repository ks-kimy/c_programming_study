#include<stdio.h>
int main(){
    int k, sum=0,i,j;
    scanf("%d",&k);
    for(i=1; i<=6;i++){
        for(j=1; j<=6; j++){
            if(k== i+j){
                printf("%d %d\n", i,j);
            }        
        }    
    }
    
    return 0;
}