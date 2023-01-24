#include<stdio.h> 
int a[10][10];
int main(){
    int i,j,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n; i++){
        for(j=0;j<n;i++){
            a[i][j]= n + 5*k;
            k++;
            n--;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}