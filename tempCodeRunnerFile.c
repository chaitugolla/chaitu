#include <stdio.h>
int main()
{
    int a[1000];
    int i,b;
    printf("enter the value:");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%1d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}