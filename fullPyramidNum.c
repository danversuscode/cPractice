//Can't seem to figure out why my code doesn't work and Programiz' works

/*#include<stdio.h>

int main(){

   int i, j, k, count1, count2, rows = 0;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= rows - i; ++j) {
         printf("   ");
         ++count1;
      }
      while (k != 2 * i - 1) {
         if (count1 <= rows - 1) {
            printf("%d", i + k);
            ++count1;
         } else {
            ++count2;
            printf("%d", (i + k - 2 * count1));
         }
         ++k;
      }
      count2 = count1 = k = 0;
      printf("\n");
   }
   return 0;
}*/

#include <stdio.h>
int main() {
   int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= rows - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}