#include<stdio.h>
int arr[10];
int main(){
    int i,j,k,sum=0,temp;
    for(i=0; i<9;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<9;i++){
        sum = sum + arr[i];
    }
    temp = sum;
    for(i=0; i<8; i++){
        for(j=i+1; j<9; j++){
            temp = sum - (arr[i]+arr[j]);
            if(temp == 100) {
                arr[i]=-1;
                arr[j]=-1;
                break;// 두 번째 for 에 대한 break //
            }
        if(temp==100) {break;} /* 이렇게 되면 break 를 바로 받아서 i=0 ,j= 1,2,3,4,5... 일때 첫번 째 for 
        구문에서 끝나버리고 바로 break 를 받고 나와버림 */
        }
    for(i=0; i<9; i++){
        if(arr[i]>0) printf("%d ",arr[i]);
    }
    }
    return 0;
}