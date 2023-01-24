#include<stdio.h>
#include<string.h>
int arr[10];
int main(){
    int i,j,k,tmp;
    for(i=0;i<=8;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d",&k);
    for(i=1; i<=k ; i++){
        tmp = arr[0];
        for(j=0;j<8;j++){
            arr[j]=arr[j+1];
        }
        arr[j]=tmp;
    }
    for(i=0;i<9;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
