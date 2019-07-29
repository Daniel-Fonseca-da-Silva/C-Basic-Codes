#include <iostream>
#include <string.h>


using namespace std;

class Mamifero // Classe Mamifero
{
  // Atributos
  private:
    float peso;
    int idade;

  public:
    // Construtor
  Mamifero(float peso, int idade)
  {
    this->peso = peso;
    this->idade = idade;
  }

  float getPeso()
  {
    return peso;
  }
  int getIdade()
  {
    return idade;
  }

}; // Fim da classe Mamifero

  class Baleia : public Mamifero // Classe Baleia
  {

  private:
    char oceano[50];

  public:
    Baleia(const char * oceano, float peso, int idade) :
    Mamifero(peso, idade)
    {
      strcpy(this->oceano, oceano);
    }

    void mostrarBaleia()
    {
      cout << "Oceano: " << oceano << endl;
      cout << "Peso: " << getPeso() << endl;
      cout << "Idade: " << getIdade() << endl;
    }

}; // fim da classe Baleia

int main()
{

  Baleia baleia("Pacifico", 18592, 20);

  baleia.mostrarBaleia();

  return 0; // retorno
}
