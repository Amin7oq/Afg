#include <stdio.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d", &n);
    int IsPowerOfTwo = (n > 0) * ((n & (n - 1)) == 0);
    printf("%d\n", isPowerOfTwo);
    return 0;
}
