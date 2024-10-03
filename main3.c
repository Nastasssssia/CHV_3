#include <stdio.h>

// Ввести номер месяца и вывести название времени года

int main(void)
{
    int num;
    printf("Input a number from 1 to 12: ");
    scanf("%d", &num);
    if (num < 1 || num > 12)
    {
        printf("Invalid input. Please input a number from 1 to 12.\n");
    }
    else
    {
        if (num == 12 || num == 1 || num == 2)
        {
            printf("Winter\n");
        }
        else if (num >= 3 && num <= 5)
        {
            printf("Spring\n");
        }
        else if (num >= 6 && num <= 8)
        {
            printf("Summer\n");
        }
        else if (num >= 9 && num <= 11)
        {
            printf("Autumn\n");
        }
    }
    return 0;
}