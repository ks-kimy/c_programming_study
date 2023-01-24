#include<stdio.h>
int arr[101];
int main(){
    int i,j,n,m,k;
    scanf("%d", &n);
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for(j=n-1;j>=0;j--){
        if(arr[j]>m){ 
            arr[j+1]=arr[j];}
        else break;
        
    }
    arr[j+1]=m;

    for(i=0; i<=n; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}