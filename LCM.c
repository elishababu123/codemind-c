#include<stdio.h>
int main()
{
    int n1,n2,i,max,lcm;
    scanf("%d%d",&n1,&n2); 
    max=(n1>n2)?n1:n2;
    for(i=0;i<max;i++) 
    { 
        if(max%n1==0&&max%n2==0)
        {
            lcm=max; break; 
            
        } 
        max++;
        } 
        printf("%d",lcm);
        }