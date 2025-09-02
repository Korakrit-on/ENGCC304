#include<stdio.h>
int main() {
    int n, i, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");

    
    //วน จาก n ลงมาถึง 2
    do {
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ

        if (n == 2) {// 2 เป็นกรณีพิเศษ 2 เป็นจำนวนเฉพาะเพราะมีตัวหารเพียง 2 ตัวเท่านั้น
            primeNum = 1; // 2 เป็นจำนวนเฉพาะ
        } else {
            i = 2;//เริ่มตัวหารจาก 2
            do {
                if (n % i == 0) { //ถ้า n หารด้วย i เป็นเศษ 0
                    primeNum = 0; // ไม่ใช่จำนวนเฉพาะ
                }
                i++;//ตัวหารถัดไป
            } while (i <= n / 2);//end loop
        }//end else

        if (primeNum == 1) {
            printf("%d ", n);
        } //end if

        n--;
    } while (n >= 2);//end loop

    return 0;
}//end program