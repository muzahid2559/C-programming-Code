#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    if(A%2==0)
    {
        printf("%d is the Even\n",A);
    }
    else if (A%2==1)
    {
        printf("%d is the Odd",A);
    }

    return 0;
}
