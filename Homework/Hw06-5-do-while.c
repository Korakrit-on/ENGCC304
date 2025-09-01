#include<stdio.h>
int main() {
    int n, i, j, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");

    
    i = n;//วน จาก n ลงมาถึง 2
    do {
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ

        if (i == 2) {// 2 เป็นกรณีพิเศษ
            primeNum = 1; // 2 เป็นจำนวนเฉพาะ
        } else {
            j = 2;//เริ่มตัวหารจาก 2
            do {
                if (i % j == 0) { //ถ้า i หารด้วย j เป็นเศษ 0
                    primeNum = 0; // ไม่ใช่จำนวนเฉพาะ
                }
                j++;//ตัวหารถัดไป
            } while (j <= i / 2);//end loop
        }//end else

        if (primeNum == 1) {
            printf("%d ", i);
        } //end if

        i--;
    } while (i >= 2);//end loop

    return 0;
}//end program