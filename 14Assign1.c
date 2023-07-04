#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers:_");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum of 10 natural numbers is %d",sum);
    return 0;
}