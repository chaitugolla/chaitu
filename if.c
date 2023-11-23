#include <stdio.h>
int main()
{
    float n1,n2,n3;
    printf("enter n1,n2,n3 values");
    scanf ("%f %f %f",&n1,&n2,&n3);
    if (n1 >= n2 && n1 >= n3)
    printf("%f is the largest number.", n1);

  
  if (n2 >= n1 && n2 >= n3)
    printf("%f is the largest number.", n2);

  
  if (n3 >= n1 && n3 >= n2)
    printf("%f is the largest number.", n3);
}
