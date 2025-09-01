#include<stdio.h>
int main() {
    int n, i, j, primeNum;
    printf("Test case:\n");
    printf("Enter number:");
    scanf("%d",&n);
    printf("output:");
    //วน จาก n ลงมาถึง 2
    
    for (i = n; i >= 2; i--){
        primeNum = 1; //สมมติเป็นจำนวนเฉพาะ

        //i มีตัวหารที่ไม่ใช่ 1 และตัวมันเอง ?
        for (j = 2; j <= i / 2; j++){
            if (i % j == 0){ //ถ้า i หารด้วย j เป็นเศษ 0
                primeNum = 0; //ไม่ใช่จำนวนเฉพาะ
            }//end if
        }//end loop
    if (primeNum == 1){
            printf("%d ", i);
        }//end if
        
        
    }//end loop1
    return 0;
}//end program