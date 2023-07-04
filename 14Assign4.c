#include<stdio.h>
int main()
{
    int a[10],i,x=0;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(x<a[i])
           x=a[i];
    } 
    printf("Scond largest number is %d",x);
    return 0;
}