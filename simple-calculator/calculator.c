
#include <stdio.h>

int main(void)
{
    int choice, a, b;

    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("A: ");
        scanf("%d", &a);

        printf("B: ");
        scanf("%d", &b);

        printf("Result: %d\n", a + b);
    }
    else if (choice == 2)
    {
        printf("A: ");
        scanf("%d", &a);

        printf("B: ");
        scanf("%d", &b);

        printf("Result: %d\n", a - b);
    }
    else if (choice == 3)
    {
        printf("A: ");
        scanf("%d", &a);

        printf("B: ");
        scanf("%d", &b);

        printf("Result: %d\n", a * b);
    }

    return (0);
}
