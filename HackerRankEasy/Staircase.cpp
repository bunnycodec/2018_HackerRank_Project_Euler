#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sp,i,j,k;
    scanf("%d",&n);
    sp=n-1;
    for(i=1;i<=n;i++)
        {
            for(j=0;j<sp;j++)
                printf(" ");
            for(k=1;k<=i;k++)
                printf("#");
        printf("\n");
        sp--;
    }
    return 0;
}
