#include<stdio.h>

int main() {

    int Arr[] = {10, 20, 30, 10, 40, 50, 20};
    int size = sizeof(Arr) / sizeof(Arr[0]);

    int newArr[150];
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < newSize; j++) {
            if (Arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[newSize] = Arr[i];
            newSize++;
        }
    }
    printf("Array after removing duplicates:\n");
        for (int i = 0; i < newSize; i++) {
            printf("%d ", newArr[i]);
        }
    return 0;
}