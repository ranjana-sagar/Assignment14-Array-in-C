#include<stdio.h>
int main()
{
    int a[10],i,j,x,y=8;
    printf("Enter 10 numbers:_\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    //starting sorting
    for(j=0;j<=8;j++,y--)
    {
    for(i=0;i<=y;i++)
        if(a[i]>a[i+1])
        {
            x=a[i+1];
            a[i+1]=a[i];
            a[i]=x;
        }
    }//end of j
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;
}