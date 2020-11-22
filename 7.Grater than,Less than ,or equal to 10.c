#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    if(A>10)
    {
        printf("%d is Grater than 10\n",A);
    }
    else if (A<10)
    {
        printf("%d is Less than 10\n",A);
    }
    else
    {
        printf("%d is Equal to 10\n",A);
    }

    return 0;
}
