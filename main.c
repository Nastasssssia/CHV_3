#include <stdio.h>

// Ввести пять чисел и вывести наибольшее из них
// Нужно напечатать наибольшее число

int main(void)
{
    int num1, num2, num3, num4, num5;
    printf("Input 5 numbers:");
    int max = num1;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }
    if (num5 > max)
    {
        max = num5;
    }
    printf("%d\n", max);
    return 0;
}