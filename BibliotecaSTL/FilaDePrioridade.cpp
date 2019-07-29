#include <iostream>
#include <queue>

// Fila com maior prioridade exemplo paciente em caso de morte
// Algo militar ou algo urgente

using namespace std;

int main(int argc, char const *argv[])
{
  priority_queue<int> fila;

  fila.push(20); // Insere
  fila.push(10); // Insere
  fila.push(50); // Tem maior prioridade, número maior

  //fila.pop(); // Remove elemento com maior prioridade

  cout << "Fila do topo " << fila.top() << '\n';
  cout << "Tamanho: " << fila.size() << endl;

  return 0;
}
