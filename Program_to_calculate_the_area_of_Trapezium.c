#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float x;
    x= 0.5 * (a + b) * h;
    printf("%0.4f",x);
}