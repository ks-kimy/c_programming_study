#include<stdio.h>
int arr[11][11];
int main(){
    int i,j,n,k=1,l=1,temp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                arr[i][j]=-1+k*2;
                k++;}
            if(i+j==n-1 && i!=j){
                arr[i][j]=2*l;
                l++;}
            

        }
    }
    for(i=0; i<n; i++){
        for(j=0; j <n; j++){
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}