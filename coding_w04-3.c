#include <stdio.h>  

int main() {
    char nameInitial = 'S';    
    int age = 18;             
    float weight = 42.50;      
    char gender[] = "female";  

    
    printf("nameInitial = %c\n", nameInitial);  
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;  
}
/*-------------------------------------
ใช้สำหรับฟังก์ชัน printf
ประกาศตัวแปรชนิดที่เหมาะสมกับค่าตัวอักษร → ใช้ char
ใช้ int สำหรับอายุซึ่งเป็นเลขจำนวนเต็ม
ใช้ float สำหรับเลขทศนิยม 1 ตำแหน่ง
ใช้ char array สำหรับข้อความเพศ (string)
แสดงผลค่าทั้งหมดด้วย printf
จบโปรแกรมอย่างถูกต้อง ไม่เกิด error
--------------------------------------*/