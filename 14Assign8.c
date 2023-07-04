#include<stdio.h>
#include<limits.h>
int main()
{
   int a[10],i,s1,s2;
   printf("Enter six numbers:");
   for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    s1=a[0];
    s2=INT_MAX;
    //user input
    for(i=1;i<=9;i++)
    {
        if(s1>a[i])
        {
            s2=s1;
            s1=a[i];
        }
        else if(s2>a[i]&&s1<a[i])
               s2=a[i];
    }
    printf("\nFirst smallest number is %d",s1);
    printf("\nSecond smallest number is %d",s2);
    return 0;    
}