#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a2;
    double b2;
    char p[2000];
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a2);
    scanf("%lf",&b2);
    fflush(stdin);
    gets(p);
    // Print the sum of both integer variables on a new line.
    printf("\n%d",i+a2);
    // Print the sum of the double variables on a new line.
    printf("\n%0.1f",d+b2);
    // Concatenate and print the String variables on a new line
    printf("\n%s",s);
    puts(p);
   // The 's' variable above should be printed first.

    getch();
}
