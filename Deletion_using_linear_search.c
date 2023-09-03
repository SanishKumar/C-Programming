#include <stdio.h>
int i;
int linearSearch(int arr[], int n, int target){
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // target not found
}

void deleteElement(int arr[], int n, int target) {
    int i, pos = linearSearch(arr, n, target);
    
    if (pos == -1) {
        printf("%d not found in the array\n", target);
        return;
    }
    // shift elements to the left of position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // decrease size of array
    printf("%d deleted from the array\n", target);
    // print updated array
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 8, 3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    deleteElement(arr, n, target);
    return 0;
}

