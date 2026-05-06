#include <stdio.h>

int main() {
  int n, cont = 0;
  float i, r;

    printf("Qual o elemento inicial?");
    scanf("%f", &i);

    printf("Qual a Razão?");
    scanf("%f", &r);

    printf("Quantos elementos deseja mostrar?");
    scanf("%i", &n);

    while (cont < n) {
      printf("%.2f ", i);
      i = i + r;
      cont++;
    }

    return 0;
}