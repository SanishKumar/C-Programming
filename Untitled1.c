#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[7],a,sum=0;
    float high,avg,low;
    for(a=0;a<7;a++){
        scanf("%d", &arr[a]);
    }
    high = arr[0];
    low = arr[0];
    for(a=1;a<7;a++){
        if(arr[a]>high){
            high = arr[a];
        }
        if(arr[a]<low){
            low = arr[a];
        }
    }
    for(a=0;a<7;a++){
        sum += arr[a];
    }
    avg = sum/7;
    printf("%.2f\n", avg);
    printf("%.2f\n", high);
    printf("%.2f\n", low);
    return 0;
}
