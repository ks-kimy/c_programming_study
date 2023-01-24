#include<stdio.h>
#include<math.h>
int main(void)
{
    double x ,y ;
    scanf("%lf",&y);
    x = y/12 ;
    
    printf("필요한 연필 다스 수 = %f\n",ceil(x));
    
    return 0;
}23