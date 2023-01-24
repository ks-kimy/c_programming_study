#include<stdio.h>
int a[11][11];
int main(){
    int n,i,j,k=1;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            a[i][j]=k;
            k++;
        }
    }
    for(i=0;i<n; i++){
        for(j=0;j<n;j++){
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}