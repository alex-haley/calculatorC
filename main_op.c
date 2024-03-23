#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus_op(int a, int b);
int minus_op(int a, int b);

int main(void)
{
  // в самом начале назначаю две переменные для их счета
  int a, b;

  // приветствие и выбор оператора калькулятора
  // advance options in development
  printf("welcome to calculatorC! select the operator (+, -): "
"or you can choose more advance options (a): ");
  
  // определение переменной, в которую будет заноситься значение + или -
  char val;
  scanf("%c", &val);

  printf("\n");
  // функция если val = +
  if (val == '+')
  {
    // сканируются а и б, затем вызывается функция plus_op
    printf("(+)enter two digits with enter: ");
    scanf("%d %d", &a, &b);
    
    plus_op(a, b);

    return 0;
  }

  // в противном случае вызывается функйия minus_op
  else if (val == '-')
  {
    printf("(-)enter two digits with enter: ");
    scanf("%d %d", &a, &b);

    minus_op(a, b);

    return 0;
  }

  else
  {
    printf("incorrect input, try again\n");
    return 1;
  }

  return 0;
}

// определение функции сложения
int plus_op(int a, int b)
{
  int sum;

  sum = a + b;
  printf("your answer is: %d\n", sum);
}

// определение функции вычитания
int minus_op(int a, int b)
{
  // выбор положения цифр в вычитании
  int choice, mis;
  printf("a - b or b - a? (1, 2):\n");
  scanf("%d", &choice);

  if (choice == 1)
  {
    mis = a - b;

    printf("your answer is: %d\n", mis);
  }
  else
  {
    mis = b - a;

    printf("your answer is: %d\n", mis);
  }
}
