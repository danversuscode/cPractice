#include<stdio.h>

int main() {

    int i, userInput, sum = 0;

    printf("Enter a number to add: ");
    scanf("%d", &userInput);

    for (i = 1; i <= userInput; ++i) {
        sum += i;
    }
    printf("You new sum is %d\n", sum);

    return 0;
}
