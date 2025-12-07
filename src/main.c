#include <stdio.h>

int main(void) {

    int age = 20;

    {
        int age = 25;
        printf("Age inside %d\n", age);
    }
    float height = 5.7;
    char grade;

    grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    int num1 = 43, num2 = 88;
    int sum = num1 + num2;
    int prod = num1 * num2;

    printf("sum is %d, prod is %d\n", sum, prod);
    printf("num1 bytes %d\n", sizeof(num1));
    
    return 0;
}
