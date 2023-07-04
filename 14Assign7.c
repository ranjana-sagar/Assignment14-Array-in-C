#include<stdio.h>
#include<limits.h>
int main()
{
   int a[7],i,l1,l2;
   printf("Enter six numbers:");
   for(i=0;i<=6;i++)
       scanf("%d",&a[i]);
    l1=a[0];
    l2=INT_MIN;
    //user input
    for(i=1;i<=6;i++)
    {
        if(l1<a[i])
        {
            l2=l1;
            l1=a[i];
        }
        else if(l2<a[i]&&l1>a[i])
            l2=a[i];
    }
    printf("\nFirst largest number is %d",l1);
    printf("\nSecond largest number is %d",l2);
    return 0;    
}