#include <stdio.h>
int main () {
    int N;
    int i;

    //input
    printf("Enter value:");
    scanf("%d", &N);

    if(N % 2 != 0) { // ถ้า N หาร 2 แล้วมีเศษเหลือ (เป็นเลขคี่)
        printf("Series:");
        for(i = 1 ; i <= N ; i += 2) {
        printf(" %d", i);
        }
    } else if (N % 2 == 0) { //ถ้า N หาร 2 แล้วไม่มีเศษเป็น0 (เป็นเลขคู่)
        printf("Series:");
    for(i = N ; i >= 0 ; i -= 2) {
        printf(" %d", i);
        }
   
    }
    return 0;
}