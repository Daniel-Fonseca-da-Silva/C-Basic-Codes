#include <iostream>

using namespace std;

int main()
{

  int matriz[2][2] = {{1,2}, {3,4}};

  for(int x = 0; x < 2; x++)
  {
    for(int y = 0; y < 2; y++)
    {
      cout << matriz[x][y] << '\t';
    }
    cout << endl;
  }



  return 0;
}
