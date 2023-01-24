#include<stdio.h> 
int a[11][11];
int main(){
    int i,j,n,k=0,temp;
    scanf("%d",&n);
    temp = n;
    for(i=0;i<n; i++){
        for(j=0;j<n;j++){
            a[i][j]= temp + 5*j ;
        }
        temp-- ;
        
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3d",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}