#include <stdio.h>

void printMenu();
void printInvalidOptionMessage();
int add(int a, int b);

int main() {

  printMenu();
  int option = 0;

  scanf("%d", &option);

  int numA = 0, numB = 0;
  int result = 0;

  do {
    switch (option) {
      case 1:
        scanf("%d%d\n", &numA, &numB);
        result = add(numA, numB);
        break;
      default:
        printInvalidOptionMessage();
    }
  } while (option != 1);
  printf("%d\n",result );

  return 0;
}

int add(int a, int b) {
  return a + b;
}

void printMenu() {
  printf("1. Add\n");
}

void printInvalidOptionMessage() {
  printf("Escolha uma opcao valida\n");
}
