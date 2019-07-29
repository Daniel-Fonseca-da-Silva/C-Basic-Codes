#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// Usando um nome para definir a struct Automovel
typedef struct Automovel
{
  // Membros da struct publicos por padrão
  char marca[20];
  char nome[100];
  char combustivel[30];
  int ano;
  float toque;
  int cilindros;
  int cambio;

  // Metódo da struct
  void showDados()
  {
    cout << "Marca: " << marca << endl;
    cout << "Nome: " << nome << endl;
    cout << "Combustível: " << combustivel << endl;
    cout << "Ano: " << ano << endl;
    cout << "Toque: " << toque << endl;
    cout << "Cilindros: " << cilindros << endl;
    cout << "Câmbio: " << cambio << endl;
  }

}carro; // <- Definido um nome simples

int main()
{
  // instancia carros do tipo pessoa sem usar sctruct tipo nome
  carro veiculo;
  carro* landau; // Ponteiro

  landau = &veiculo;
  carro carros[5]; // Declar Vetor de carros do tipo carro

  strcpy((*landau).marca, "Ford"); // Usando asterisco ponto

  strcpy(landau->nome, "Ford Galaxie Landau 4->9");
  strcpy(landau->combustivel, "Àlcool");
  landau->ano = 1982;
  landau->toque = 52.08;
  landau->cilindros = 8;
  landau->cambio = 3;

  landau->showDados(); // Chamada da função da struct

  carros[0] = veiculo; // carros do tipo carro recebe carro na posicao 0
  carros[0].showDados(); // Chama o metódo de carros na posicao 0 para exibe seus membros

  /*
  cout << "Marca: " << landau->marca << endl;
  cout << "Nome: " << landau->nome << endl;
  cout << "Combustível: " << landau->combustivel << endl;
  cout << "Ano: " << landau->ano << endl;
  cout << "Toque: " << landau->toque << endl;
  cout << "Cilindros: " << landau->cilindros << endl;
  cout << "Câmbio: " << landau->cambio << endl;
  */

  return 0;
}
