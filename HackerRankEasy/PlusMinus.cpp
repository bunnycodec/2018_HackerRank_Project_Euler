#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; float c0=0.0,c1=0.0,c2=0.0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i=0;arr_i<n;arr_i++)
        {
            if(arr[arr_i]==0)
                c0++;
            if(arr[arr_i]>0)
                c2++;
            if(arr[arr_i]<0)
                c1++;
    }
    printf("%f\n%f\n%f",c2/n,c1/n,c0/n);
    return 0;
}
