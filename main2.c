#include <stdio.h>

// Ввести три числа и определить, верно ли, что они вводились в порядке
// возрастания.

int main(void)
{
    int num1, num2, num3;
    printf("Input 3 numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 < num2 && num2 < num3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}