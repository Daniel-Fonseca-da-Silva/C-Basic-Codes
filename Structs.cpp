#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Automovel
{
  char marca[20];
  char nome[100];
  char combustivel[30];
  int ano;
  float toque;
  int cilindros;
  int cambio;
};

int main()
{

  struct Automovel veiculo;

  strcpy(veiculo.marca, "Ford");
  strcpy(veiculo.nome, "Ford Galaxie Landau 4.9");
  strcpy(veiculo.combustivel, "Àlcool");
  veiculo.ano = 1982;
  veiculo.toque = 52.08;
  veiculo.cilindros = 8;
  veiculo.cambio = 3;

  cout << "Marca: " << veiculo.marca << endl;
  cout << "Nome: " << veiculo.nome << endl;
  cout << "Combustível: " << veiculo.combustivel << endl;
  cout << "Ano: " << veiculo.ano << endl;
  cout << "Toque: " << veiculo.toque << endl;
  cout << "Cilindros: " << veiculo.cilindros << endl;
  cout << "Câmbio: " << veiculo.cambio << endl;

  return 0;
}
