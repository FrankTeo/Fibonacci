
#include<stdio.h>
int fun(int n)
{
    if (n <= 1)
        return n;
    else
        return fun(n-1) + fun(n-2);
}
 
int main()
{
    int n;
    printf("Please input a integer (greater than 0):");
    scanf("%d",&n);
    int i;
    for (i = 1; i < n+1; i++)
    {
        printf("%d, ", fun(i));
        if (i != 0 && i%5 == 0)
            printf("\n");
    }
    return 0;

}