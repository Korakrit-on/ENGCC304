#include<stdio.h>
int main() {
    int n, i, j, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");

    i = n;
    while (i >= 2){
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ
        j = 2;//เริ่มตัวหารจาก 2
        while (j <= i / 2){
            if (i % j == 0){ //ถ้า i หารด้วย j เป็นเศษ 0
                primeNum = 0; //ไม่ใช่จำนวนเฉพาะ
            }//end if
            j++;//ตัวหารถัดไป
        }
        
        if (primeNum == 1){
            printf("%d ", i);
        }//end if
        i--;
    }
    
    
}