#include<stdio.h>
int main()
{
    int n,q,s=0,sn1,sn2,r,rsn2;
    scanf("%d",&n);
    sn1=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
        
    }
    sn2=s*s;
    q=sn2;
    s=0;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
        
    }
    rsn2=s;
    if(sn1==rsn2)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
        
    }
    
}