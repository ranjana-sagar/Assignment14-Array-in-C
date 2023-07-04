#include<stdio.h>
int main()
{
    int a[10],i,x;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    x=a[0];
    for(i=1;i<=9;i++)
        if(x>a[i])
           x=a[i];    
    printf("smallest no is %d",x);
}