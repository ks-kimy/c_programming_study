#include<stdio.h>

int main(void)
{
    double a,b,c,m ;
    scanf("%lf %lf %lf", &a,&b,&c);
    m =(a+b+c)/3.0; // (double)(a+b+c)/3; 으로 해도 무방 //
    m= m*100 ;
    m= m+0.5;
    m= (int)m;
    m= m/100;
    printf("%f\n",m);
    return 0;
}