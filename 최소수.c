#include<stdio.h>

int main(void)
{
    int a,b,c,max,plus;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        max=a; plus = b+c;}
    else {
        max=b; plus = a+c;}
    if(c>max) {
        max=c; plus = a+b;}
    if(max>plus)
    printf("yes\n" );
    else 
    printf("no\n");
    return 0;
}