#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }    
    //user input
    printf("\n");
    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
    return 0;        
}