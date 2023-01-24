#include<stdio.h>
#include<string.h>
char arr[100];
int main(){
    int i,j,n;
    scanf("%s", arr);
    n = strlen(arr);
    for(i=0; i<n;i++){
        if(arr[i]=='a')
        arr[i]='*';
    }
    printf("%s", arr);
    return 0;

}