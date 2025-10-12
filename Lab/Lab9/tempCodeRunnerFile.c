#include<stdio.h>
int main() {
    int N = 0;
    
    printf("enter N :");
    scanf("%d", &N);

    // printf("index : ");
    int arr[N] ; 

    for (int i = 0; i < N; i++)
    { 
        printf("enter value[%d]: ",i);
        scanf("%d", &arr[i]);
    }

     printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }
    printf("\n");


    printf("Array: ");
    for (int j = 0; j < N ; j++ ) {
            int num = arr[j];
        int isPrime = 1;
        if (num < 2) {
            isPrime = 0;
        } else {
            for (int k = 2; k <= num / 2; k++) {
                if (num % k == 0) {
                    isPrime = 0;
                }
            
            
            }


        }
        if (isPrime) {
            printf("%d ", num);
        } else {
            printf("# ");
        }
    }
}