#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	long i,sum=0,sum2=0,n,j,t;
    scanf("%ld",&t);
    for(j=1;j<=t;j++)
    {
        sum=0; sum2=0;
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            sum=sum+(i*i);
            sum2=sum2+i;
        }
        sum2=sum2*sum2;
        sum2=sum2-sum;
        printf("%ld\n",sum2);
    }
}