#include <stdio.h>

int main() {
    int number;
    char *result;
  
    printf("Введите целое число: ");
    scanf("%d", &number);
 
    result = (number % 2 == 0) * "четным" + (number % 2 != 0) * "нечетным";

    printf("Число %d является %s.\n", number, result);

    return 0;
}
