#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Average of 10 numbers is %0.2f",s/10.0);
    return 0;
}