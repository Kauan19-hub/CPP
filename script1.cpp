#include <iostream>
using namespace std;

void collatz(int n) {
  int passos = 0;

  while (n != 1) {
    if (n % 2 == 0)
      n /= 2;

    else
      n = 3 * n + 1;

    passos++;

  }

  cout << "Passos necessários: " << passos << endl;

}

int main() {
  int numero;
  cout << "Digite um número: ";
  cin >> numero;

  if (numero <= 0) {
    cout << "Digite um número inteiro positivo maior que 0." << endl;
    return 1;

  }

  collatz(numero);
  return 0;

}