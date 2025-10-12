#include<stdio.h>
int main(){
    
    int position , yearExp , finProjects;
    int salary,expBonus,projectsBonus,sumSalary = 0;
    //ป้อนข้อมูล ตำแหน่ง เวลาทำงานกี่ปี และ projectที่เสร็จ
    printf("position:");
    scanf("%d",&position);
    
    printf("Years of Experience:");
    scanf("%d",&yearExp);

    printf("Number of Projects Completed this Year:");
    scanf("%d",&finProjects);

    //กำหนดเงินเดือนแต่ละตำแหน่ง
    switch (position)
    {
    case 1:
        salary = 20000;
        break;
    case 2:
        salary = 35000;
        break;
    case 3:
        salary = 50000;
        break;
    default:
        printf("put your position number only!!!(1-3)");
        return 1;
    }

    //คำนวณโบนัสพิเศษ ตามอายุการทำงาน
    if(yearExp >= 1 && yearExp <= 3){
        expBonus = salary * 10/100;

    } else if (yearExp >= 4 && yearExp <= 5){
        expBonus = salary * 15/100;
        
    } else if(yearExp >= 5){
        expBonus = salary * 20/100;    
    } //ไม่มีเงื่อนไข yearExp <= 0 เพิ่ม เพราะ ค่า bonus เริ่มต้นเท่ากับ 0

    //คำนวณโบนัสพิเศษ ตามงาน project
    if(finProjects > 5) {
        projectsBonus = salary * 5/100;
    }

    //คำนวณรายได้ทั้งหมด
    sumSalary = salary + expBonus + projectsBonus;

    //แสดงผลoutput
    printf("Base Salary:%d\n", salary);
    printf("Experience Bonus:%d\n", expBonus);
    printf("Special Bonus:%d\n", projectsBonus);
    printf("Net Salary:%d\n", sumSalary);

    return 0;
}
