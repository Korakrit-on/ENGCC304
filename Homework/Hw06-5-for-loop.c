#include<stdio.h>
int main() {
    int n, i, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");
    
    //วน จาก n ลงมาถึง 2
    for (n; n >= 2; n--){
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ

        //เช็ค n มีตัวหารที่ไม่ใช่ 1 และตัวมันเอง ?
        for (i = 2; i <= n / 2; i++){
            if (n % i == 0){ //ถ้า n หารด้วย i เป็นเศษ 0
                primeNum = 0; //ไม่ใช่จำนวนเฉพาะ
            }//end if
        }//end loop
    if (primeNum == 1){
            printf("%d ", n);
        }//end if
        
        
    }//end loop1
    return 0;
}//end program