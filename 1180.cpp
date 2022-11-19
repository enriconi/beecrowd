#include <iostream>

using namespace std;

int main()
{
  int a, n, menor = 1001, pos;

  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> n;

    if (n < menor) {
      menor = n;
      pos = i;
    }
  }

  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << pos << endl;
  
  return 0;
}