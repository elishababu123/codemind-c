#include<stdio.h>
int main()
{
    int n,s=0,r,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q/=10;
    }
    printf("%d",s);
}