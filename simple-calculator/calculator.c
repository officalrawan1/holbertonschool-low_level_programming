
#include <stdio.h>

int main(void)
{
    int choice;
    double a, b;

    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("A: ");
        scanf("%lf", &a);

        printf("B: ");
        scanf("%lf", &b);

        printf("Result: %g\n", a + b);
    }
    else if (choice == 2)
    {
        printf("A: ");
        scanf("%lf", &a);

        printf("B: ");
        scanf("%lf", &b);

        printf("Result: %g\n", a - b);
    }
    else if (choice == 3)
    {
        printf("A: ");
        scanf("%lf", &a);

        printf("B: ");
        scanf("%lf", &b);

        printf("Result: %g\n", a * b);
    }
    else if (choice == 4)
    {
        printf("A: ");
        scanf("%lf", &a);

        printf("B: ");
        scanf("%lf", &b);

        if (b == 0)
        {
            printf("Error: division by zero\n");
        }
        else
        {
            printf("Result: %g\n", a / b);
        }
    }

    return (0);
}
