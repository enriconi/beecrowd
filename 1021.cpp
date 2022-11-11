#include <iostream>

using namespace std;

int main()
{
  double dinheiro;
  int nota, moeda;
  int restoN = 0, restoC = 0;

  cin >> dinheiro;

  nota = dinheiro;
  moeda = (dinheiro * 100) - (nota * 100);

  cout << "NOTAS:" << endl;

  cout << (nota / 100) << " nota(s) de R$ 100.00" << endl;
  restoN = nota % 100;

  cout << (restoN / 50) << " nota(s) de R$ 50.00" << endl;
  restoN %= 50;

  cout << (restoN / 20) << " nota(s) de R$ 20.00" << endl;
  restoN %= 20;

  cout << (restoN / 10) << " nota(s) de R$ 10.00" << endl;
  restoN %= 10;

  cout << (restoN / 5) << " nota(s) de R$ 5.00" << endl;
  restoN %= 5;

  cout << (restoN / 2) << " nota(s) de R$ 2.00" << endl;
  restoN %= 2;

  cout << "MOEDAS:" << endl;
  
  cout << (restoN / 1) << " moeda(s) de R$ 1.00" << endl;

  cout << (moeda / 50) << " moeda(s) de R$ 0.50" << endl;
  restoC = moeda % 50;

  cout << (restoC / 25) << " moeda(s) de R$ 0.25" << endl;
  restoC %= 25;

  cout << (restoC / 10) << " moeda(s) de R$ 0.10" << endl;
  restoC %= 10;

  cout << (restoC / 5) << " moeda(s) de R$ 0.05" << endl;
  restoC %= 5;

  cout << (restoC / 1) << " moeda(s) de R$ 0.01" << endl;
  
  return 0;
}