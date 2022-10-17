#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
  string nome;
  int distancia, qtd = 0;
  double total = 0;

  while (getline(cin, nome)) {
    cin >> distancia;
    cin.ignore();
    total += distancia;
    qtd++;
  }

  cout << fixed << setprecision(1);
  cout << (total / qtd) << endl;

  return 0;
}