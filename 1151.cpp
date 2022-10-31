#include <iostream>

using namespace std;

int main()
{
  int n, penultimo = 0, ultimo = 1, aux;

  cin >> n;

  cout << penultimo << " " << ultimo << " ";

  for (int i = 3; i <= n; i++) {
    if (i != n) cout << (penultimo + ultimo) << " ";
    else cout << (penultimo + ultimo) << endl;

    aux = penultimo;
    penultimo = ultimo;
    ultimo += aux;
  }
  
  return 0;
}