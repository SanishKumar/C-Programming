//#include <stdio.h>
//main(){
//	int arr[5],a,b,swap,c=0;
//	for (a=0;a<5;a++)
//	scanf("%d",&arr[a]);
//	for (a=0;a<5;a++){
//		for (b=0;b<5;b++){
//			if (arr[b]>arr[b+1]){
//				swap=arr[b+1];
//				arr[b+1]=arr[b];
//				arr[b]=swap;
//				c++;
//			}
//		}
//	}
//	for (a=0;a<5;a++)
//	printf("\t%d\t",arr[a]);
//	printf("\n%d",c);
//	
//}


#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int pass = 0, swap = 0,i,j,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
        pass++;
    }
    printf("Number of passes: %d\n", pass);
    printf("Number of swaps: %d\n", swap);
}

int main() {
    int arr[] = {13,3,1,27,11};
    int n = sizeof(arr) / sizeof(arr[0]),i;
    bubbleSort(arr, n);
    printf("Array after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

