#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        puts("see commands in (--help)");
        return EXIT_FAILURE;
    }

    if (strcmp(argv[1], "--help") == 0)
    {
        puts("calculatorC, the terminal version\n\n"
              "simple commands:\n"
              "--sum, => make a sum of your two digits\n"
              "--sub, => make a subtraction of your two digits\n"
              "\n"
              "advanced commands:\n"
              "--mul, => make a multiplication of your two digits\n"
              "--div, => make a division of your two digits\n"
              "--sqr, => make a square of digit\n");

        return EXIT_SUCCESS;
    }

    if (strcmp(argv[1], "--sum") == 0)
    {
        int a, b, sum;
        puts("type in two digits separate with one space: ");
        scanf("%d %d", &a, &b);

        sum = a + b;
        printf("answer is: %d\n", sum);
    }

    if (strcmp(argv[1], "--sub") == 0)
    {
        int a, b, sub;
        puts("type in two digits separate with one space: ");
        scanf("%d %d", &a, &b);

        sub = a - b;
        printf("answer is: %d\n", sub);
    }

    if (strcmp(argv[1], "--mul") == 0)
    {
        int a, b, mul;
        puts("type in two digits separate with one space: ");
        scanf("%d %d", &a, &b);

        mul = a * b;
        printf("answer is: %d\n", mul);
    }

    if (strcmp(argv[1], "--div") == 0)
    {
        float a, b, div;
        puts("type in two digits separate with one space: ");
        scanf("%f %f", &a, &b);

        div = a/b;
        printf("answer is: %.2f\n", div);
    }

    if (strcmp(argv[1], "--sqr") == 0)
    {
        int a, b, sqr;
        puts("type in two digits separate with one space: ");
        scanf("%d %d", &a, &b);

        sqr = pow(a, b);
        printf("answer is: %d\n", sqr);
    }

    else
    {
        puts("unknown input (err0)");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
