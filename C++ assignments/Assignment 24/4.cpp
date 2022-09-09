//Define a function to print Pascal Triangle up to N lines.
#include <stdio.h>
using namespace std;
void pascal(int row);
int main() {
   int rows;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   pascal(rows);
   return 0;
}
void pascal(int row)
{
   int i,j,space,coef=1;
   for (i = 0; i < row; i++) {
      for (space = 1; space < row- i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;   //main concept of the function 
         printf("%4d", coef);                  // will take 3 space before printing to get format 
      }
      printf("\n");
   }
}
