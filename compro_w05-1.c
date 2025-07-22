#include <stdio.h>

int main() {
    char name = 'J';          // name เป็นตัวอักษรตัวแรกของชื่อเล่น
    int age = 20;             // age เป็นจำนวนเต็ม
    float weight = 55.5;      // weight เป็นเลขทศนิยม

    // แสดงผลออกทางหน้าจอ 2 บรรทัด
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}
