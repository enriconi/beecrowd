#include <iostream>

using namespace std;

int main()
{
  int i, f, calculo;

  cin >> i >> f;

  if (i == f) calculo = 24;
  if (i < f) calculo = f - i;
  if (i > f) calculo = (24 - i) + f;
  
  cout << "O JOGO DUROU " << calculo << " HORA(S)" << endl;

  return 0;
}