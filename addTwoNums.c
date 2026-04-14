//I made it so convoluted to practice functions

#include<stdio.h>

int addTwoNums(int num1, int num2);

int main() {
    int result = 0;
    int num1 = 0;
    int num2 = 0;
    printf("Enter two numbers to add...\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    result = addTwoNums(num1, num2);
    printf("%d\n", result);
    return 0;
}

int addTwoNums(int num1, int num2){
    return num1 + num2;
}

