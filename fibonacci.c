
#include <assert.h>
#include <stdio.h>
long fib(long n)
{
    if (n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

void Test_fib()
{
    assert(fib(11L) == 89);
    assert(fib(17L) == 1597);
}
 
int main()
{
    long n;
    printf("Please input a integer (greater than 0, less than 92):");
    scanf("%ld",&n);
    if(n > 92 || n < 1)
    {
        return -1;
    }
    long i;
    for (i = 1; i < n+1; i++)
    {
        printf("%ld, ", fib(i));
        if (i != 0 && i%5 == 0)
            printf("\n");
    }

    printf("\n");
    Test_fib();
    return 0;
}