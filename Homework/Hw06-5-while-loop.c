#include<stdio.h>
int main() {
    int n, i, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");

    //วน จาก n ลงมาถึง 2
    while (n >= 2){ //start loop1
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ
        i = 2;//เริ่มตัวหารจาก 2
        while (i <= n / 2){ //start loop2
            if (n % i == 0){ //ถ้า n หารด้วย i เป็นเศษ 0
                primeNum = 0; //ไม่ใช่จำนวนเฉพาะ
            }//end if
            i++;//ตัวหารถัดไป
        }//end loop2
        
        if (primeNum == 1){
            printf("%d ", n);
        }//end if
        n--;
    }//end loop1
    return 0;
    
}//end program