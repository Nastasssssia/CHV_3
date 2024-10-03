#include <stdio.h>

// Ввести пять чисел и вывести наименьшее из них
// Нужно напечатать наименьшее число

int main(void)
{
    int num1, num2, num3, num4, num5;
    printf("Input 5 numbers:");
    int min = num1;
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    if (num4 < min)
    {
        min = num4;
    }
    if (num5 < min)
    {
        min = num5;
    }
    printf("%d\n", min);
    return 0;
}