#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d",&A);
    if(A>0)
    {
        printf("%d is the Positive\n",A);
    }
    else if (A<0)
    {
        printf("%d is the Negative",A);
    }
    else
    {
        printf("%d is zero,so neither positive or negative",A);
    }
    return 0;
}
