#include <stdio.h>

int main()
{
  // Declara��o de vari�veis.
  int a, b, auxiliar, i, n;

  // atribuir valores as vari�veis a e b.
  a = 0;
  b = 1;

  // A fun��o printf() escreve na tela.
  printf("Digite um numero: ");
  scanf("%d", &n);
  printf("Serie de Fibonacci:\n");
  printf("%d\n", b);

  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;

    printf("%d\n", auxiliar);
  }
}

