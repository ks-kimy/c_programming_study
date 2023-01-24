#include<stdio.h>

int main()
{
    int i,j,a,num=0;
    scanf("%d",&j);
    for(i=1; i<=7; i++){
        scanf("%d", &a);
        if(a%10==j){
            num = num+1 ;
        }
    }
    printf("%d\n", num);
    return 0 ;
    ;
}