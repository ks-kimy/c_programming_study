#include<stdio.h>
int main()
{
    int a , b, min ;
    scanf("%d %d", &a, &b);
    if(a<b) min =a ;
    else min = b;
    printf("%d\n", min);
    return 0;
    
}