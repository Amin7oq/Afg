#include <stdio.h>

int main() {

    int n;
    printf("enter number");
    scanf("%d", &n);
    char *result[] = {"even", "odd"};
    printf("%s\n", result[n % 2]);


return 0;
}
