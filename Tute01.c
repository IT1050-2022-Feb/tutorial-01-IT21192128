/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float mark1,mark2,average;

   printf("\nenter marks:");

   printf("\nMarks 1:");
   scanf("%f",mark1);

   printf("\nMark 2:");
   scanf("%f",mark2);

   average=(float) (mark1=mark2)/2;
   printf("\nAvg=%.1f",average);

  
  return 0;
}

