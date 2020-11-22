#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(A>B)
    {
        printf("%d is the maximum",A);
    }
    else if (A<B)
    {
        printf("%d is the maximum",B);
    }
    return 0;
}
