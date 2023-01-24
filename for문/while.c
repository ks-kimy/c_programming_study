#include<stdio.h>
int main(void)
{
    int a, min=2147000000, i;
    for(i= 1;i<=7; i++){
        scanf("%d", &a);
        if(a<min) min=a;
    }
    printf("%d\n",min);
    return 0;
}