
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int n;
    printf("Please input a integer (greater than 0, and less than 92):");
    scanf("%d",&n);
    if(n > 92 || n < 1) 
    {
        exit(-1);
    }

    long *pResult = (long*)malloc(sizeof(long) * n);
    bzero(pResult, sizeof(long)*n);
    long *pHead = pResult;

    int i;
    for (i = 1; i < n+1; i++, pResult++)
    {
        if(i==1 || i==2) 
        {
            *pResult = 1;
        }
        else
        {
            *pResult = *(pResult-1) + *(pResult-2);
        }
        printf("%ld, ", *pResult);
        if (i != 0 && i%5 == 0)
            printf("\n");
    }
    printf("\n");

    pResult = pHead;
    free(pResult);
    pResult = NULL;
    pHead = NULL;

    return 0;
}