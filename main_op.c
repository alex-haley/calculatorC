#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int plus_op(int a, int b);
int minus_op(int a, int b);
int der_op(int a, int b);
int mul_op(int a, int b);
int square_op(int a, int b);

int main(void)
{
  // declare variables
  int a, b;
  char val, val2;

  // приветствие и выбор оператора калькулятора
  // advance options in development
  printf("welcome to calculatorC! select the operator (+, -); "
"or you can choose more advance options (a): ");

scanf("%c", &val);
printf("\n");

  // функция если val = +
  if (val == '+')
  {
    // сканируются а и б, затем вызывается функция plus_op
    printf("(+)enter two digits with enter: ");
    scanf("%d %d", &a, &b);

    printf("\n");
    plus_op(a, b);
  }

  // в противном случае вызывается функйия minus_op
  else if (val == '-')
  {
    printf("(-)enter two digits with enter: ");
    scanf("%d %d", &a, &b);

    printf("\n");
    minus_op(a, b);
  }

  // (advanced options)
  else if (val == 'a')
  {
    printf("advance options:\n"
    "- division (d);\n"
    "- multiplication (m);\n"
    "- square (s);\n"
    "what to choose?: ");
    scanf(" %c", &val2);
    // derivative
    if (val2 == 'd')
    {
      printf("(d)enter two digits separate: ");
      scanf("%d %d", &a, &b);

      der_op(a,b);
    }
    
    // multiplication
    else if (val2 == 'm')
    {
      printf("(m)enter two digits separate: ");
      scanf("%d %d", &a, &b);

      mul_op(a, b);
    }

    // square
    else if (val2 == 's')
    {
      printf("(s)enter two digits separate: ");
      scanf("%d %d", &a, &b);

      square_op(a, b);
    }
    return 0;
  }

  else
  {
    printf("incorrect input, try again\n");
    return 1;
  }

}

// определение функции сложения
int plus_op(int a, int b)
{
  int sum;

  sum = a + b;
  printf("answer is: %d\n", sum);
  
  return 0;
}

// определение функции вычитания
int minus_op(int a, int b)
{
  // выбор положения цифр в вычитании
  int choice, mis;
  printf("a - b or b - a? (1, 2): ");
  scanf("%d", &choice);
  printf("\n");

  if (choice == 1)
  {
    mis = a - b;

    printf("answer is: %d\n", mis);
    return 0;
  }
  else
  {
    mis = b - a;

    printf("answer is: %d\n", mis);
    return 0;
  }
}

// declare derivative operator
int der_op(int a, int b)
{
  float der;

  der = (float)a/b;
  printf("answer is: %.2f\n", der);

  return 0;
}

// declare multiplication operator
int mul_op(int a, int b)
{
  int mul;

  mul = a * b;
  printf("answer is: %d\n", mul);
  return 0;
}

//square operator
int square_op(int a, int b)
{
  int sq;

  sq = pow(a, b);
  printf("answer is: %d\n", sq);
  return 0;
}
