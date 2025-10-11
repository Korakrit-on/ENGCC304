#include<stdio.h>

void minMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];

        }  
    }
}

int main() {
    int n = 0;
    printf("enter value: ");
    scanf("%d", &n);
    
    // รับค่าจากผู้ใช้เข้าอาเรย์
    int arr[n];
    printf("enter value:\n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Index: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    printf("Array: \n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    int min, max;
    minMax(arr, n, &min, &max);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
    
}