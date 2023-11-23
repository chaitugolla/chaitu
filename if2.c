#include <stdio.h>
int main()
{
    float n1,n2,n3;
    printf("enter n1,n2,n3 values");
    scanf ("%f %f %f",&n1,&n2,&n3);
    if(n1>n2)
    {
        printf(" n1 is big");
    }
    else if(n2>n3)
    {
        printf("n2 is big");
    }
    else if(n3>n1)
    {
        printf("n3 is big");
    }
    else{
        printf("n1 is big");
    }
}