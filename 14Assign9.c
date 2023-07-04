#include<stdio.h>
int main()
{
    int a[10],i,x,y,j=9;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]); 
    //user input
    for(i=0;i<=4;i++,j--)
    {
        x=a[i];
        y=a[j];
        a[i]=y;
        a[j]=x;
    }    
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;    
}