#include <iostream>
using namespace std;

int exercicio1() {
  int n1, n2, resultado;
  cout << "Digite o primeiro numero \n";
  cin >> n1;

  cout << "Digite o segundo numero \n";
  cin >> n2;

  resultado = n1 - n2;

  cout << n1 << " - " << n2 << " = " << resultado;

  return 0;
}

int exercicio2() {
  int n1, n2, n3, resultado;
  cout << "Digite o primeiro numero \n";
  cin >> n1;
  cout << "Digite o segundo numero \n";
  cin >> n2;
  cout << "Digite o segundo terceiro \n";
  cin >> n3;

  resultado = n1 * n2 * n3;

  cout << n1 << " * " << n2 << " * " << n3 << " = " << resultado;

  return 0;
}

int exercicio3() {
  int n1, n2;
  float resultado;

  cout << "Digite o primeiro numero \n";
  cin >> n1;
  cout << "Digite o segundo numero \n";
  cin >> n2;

  resultado = n1 / n2;

  cout << "O primeiro numero divido pelo segundo é " << resultado;

  return 0;
}

int exercicio4() {
  int n1, n2, resultado;

  cout << "Digite a primeira nota \n";
  cin >> n1;
  cout << "Digite a segunda nota \n";
  cin >> n2;

  resultado = (n1 * 2 + n2 * 3) / 5;

  cout << "A media ponderada é " << resultado;

  return 0;
}

int exercicio5() {
  int n1;
  cout << "Digite o preço do produto";
  cin >> n1;

  cout << "O valor do produto com desconto é " << n1 * 0.9;

  return 0;
}

int exercicio6() {
  int salario, vendas, resultado;
  cout << "Digite o salario ";
  cin >> salario;

  cout << "Digite o total de vendas ";
  cin >> vendas;

  resultado = salario + vendas * 0.04;

  cout << "Salario final: " << resultado;

  return 0;
}

int exercicio7() {
  int peso, resultado1, resultado2;

  cout << "Digite o peso: ";
  cin >> peso;

  resultado1 = peso * 1.15;
  resultado2 = peso * 0.80;

  cout << "Engorda 15%: " << resultado1 << endl;
  cout << "Emagresse 20%: " << resultado2 << endl;

  return 0;
}

int exercicio8() {
  int peso, resultado;

  cout << "Digite o peso em kilos: \n";
  cin >> peso;

  resultado = peso / 1000;

  cout << "O peso em gramas é " << resultado;

  return 0;
}

int exercicio9() {
  float baseMenor, baseMaior, altura, resultado;

  cout << "Digite a base maior: \n";
  cin >> baseMaior;

  cout << "Digite a base menor: \n";
  cin >> baseMenor;

  cout << "Digite a altura: \n";
  cin >> altura;

  resultado = ((baseMaior + baseMenor) * altura) / 2;

  cout << "A area do trapézio é " << resultado;

  return 0;
}

int exercicio10() {
  float salarioFuncionario, salarioMinimo, resultado;

  cout << "Digite o salario minimo: \n";
  cin >> salarioMinimo;

  cout << "Digite o salario do funcionario: \n";
  cin >> salarioFuncionario;

  resultado = salarioFuncionario / salarioMinimo;

  cout << "O funcionario recebe " << resultado << " salarios minimos";

  return 0;
}

int exercicio11() {
  int anoAtual, anoNascimento, idade;

  cout << "Digite o ano de nascimento: \n";
  cin >> anoNascimento;

  cout << "digite o ano atual";
  cin >> anoAtual;

  idade = anoAtual - anoNascimento;

  cout << "A pessoa tem " << idade << " anos de idade \n";
  cout << "A pessoa tem " << idade * 12 << " meses de idade \n";
  cout << "A pessoa tem " << idade * 365 << " dias de idade\n";
  cout << "A pessoa tem " << idade * 52 << " semanas de idade\n";

  return 0;
}

int exercicio12() {
  int salario, conta1, conta2, resultado;
  cout << "Digite o salario: \n";
  cin >> salario;
  cout << "Digite o valor da conta 1: \n";
  cin >> conta1;
  cout << "Digite o valor da conta2: \n";
  cin >> conta2;

  resultado = salario - (conta1 * 1.02 + conta2 * 1.02);

  cout << "O salario de joao apos pagar as contas é: " << resultado;

  return 0;
}

int main() { exercicio12(); }
