#include <stdio.h>

int main() {
    float C;
    printf("Enter temperature in C: ");
    scanf("%f", &C);
    
    float F = (C * 9 / 5) + 32;
    printf("%.2f F\n", F);
    
    return 0;
}
