#include <iostream>

using namespace std;

int main()
{
  int nota;
  int aux = 0;

  cin >> nota;

  cout << nota << endl;

  cout << (nota / 100) << " nota(s) de R$ 100,00" << endl;
  aux = nota % 100;

  cout << (aux / 50) << " nota(s) de R$ 50,00" << endl;
  aux %= 50;

  cout << (aux / 20) << " nota(s) de R$ 20,00" << endl;
  aux %= 20;

  cout << (aux / 10) << " nota(s) de R$ 10,00" << endl;
  aux %= 10;

  cout << (aux / 5) << " nota(s) de R$ 5,00" << endl;
  aux %= 5;

  cout << (aux / 2) << " nota(s) de R$ 2,00" << endl;
  aux %= 2;
  
  cout << (aux / 1) << " nota(s) de R$ 1,00" << endl;
  
  return 0;
}