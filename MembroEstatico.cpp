#include <iostream>

using namespace std;

class Estudante
{
protected:

  // Variável
  static int totalEstudantes;
public:

  // Construtor
  Estudante()
  {
    totalEstudantes++;
  }

  void showTotal()
  {
    cout << "Total de estudantes: " << totalEstudantes << endl;
  }

  // Desconstrutor
  ~Estudante()
  {
    totalEstudantes--;
  }

};

int Estudante::totalEstudantes = 0;

int main()
{

  Estudante e1, e2, e3, e4;

  e1.showTotal();

  return 0;
}
