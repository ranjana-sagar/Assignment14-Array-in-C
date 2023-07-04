#include<stdio.h>
int main()
{
    int a[10],i,e=0,o=0;
    printf("Enter 10 numbers:_");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
           o+=a[i];
        else
           e+=a[i];
    }
    printf("Sum of all odd numbers is %d",o);
    printf("\nSum of all even numbers is %d",e);     
    return 0; 
}