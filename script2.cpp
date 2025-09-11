#include <iostream>
using namespace std;

int main() {
  float peso, altura, imc;

  cout << "Escreva seu peso (KG): ";
  cin >> peso;

  cout << "Escreva sua altura (M): ";
  cin >> altura;

  if (peso <= 0 || altura <= 0) {
    cout << "Peso e/ou altura inválidos." << endl;
    return 1
    
  }

  imc = peso / (altura * altura);
  cout << 'Seu IMC: ' << imc << endl;

  return 0;

}