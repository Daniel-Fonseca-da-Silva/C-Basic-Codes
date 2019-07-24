#include <iostream>

using namespace std;

int main()
{

  char nome[] = "Daniel Fonseca da Silva";

  for(int i = 0; nome[i] != '\0'; i++)
  {
    cout << nome[i];
  }

  return 0;
}
