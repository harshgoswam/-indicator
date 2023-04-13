#include <stdio.h>

swap(int *n1,int *n2)
{
    int t;
    
     t   = *n1;
    *n1   = *n2;
    *n2   =  t;
    
    printf(" Swapping value A= %d\n",*n1);
    printf(" Swapping value B= %d\n",*n2);

}

int main()
{
    int a,b;

    printf("Enter value of A: ");
    scanf("%d",&a);
    printf("Enter value of B: ");
    scanf("%d",&b);

    swap(&a,&b);

}
