#include <iostream>

using namespace std;

class Estudante
{
public:
  virtual double calcular()
  {
    return 0.0;
  }
};

class EstudanteGraduado : public Estudante
{
public:
  virtual double calcular()
  {
    return 1.0;
  }
};

double fun(Estudante * e)
{
  return e->calcular();
}

int main()
{

  Estudante e;

  cout << "O valor e: " << fun(&e) << endl;

  EstudanteGraduado ef;

  cout << "O valor e: " << fun(&ef) << endl;

  return 0; // returno
}
