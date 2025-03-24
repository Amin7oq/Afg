#include <stdio.h>

int main() {
    int a, b, c, sign;
   
    printf("enter 3 numbers ");
    scanf("%d %d %d", &a, &b, &c);
 
    sign = (a == 0 || b == 0 || c == 0) * 0 + (a * b * c > 0) * 1 + (a * b * c < 0) * -1;
    printf("%d\n", sign);
    return 0;
}
