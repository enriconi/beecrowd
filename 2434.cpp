#include <iostream>
using namespace std;

int main()
{
  int d, saldo, n, aux = 0;

  cin >> d >> saldo;

  aux = saldo;

  for (int i = 0; i < d; i++) {
    cin >> n;
    saldo += n;
    if (saldo < aux) aux = saldo;
  }

  cout << aux << endl;
  
  return 0;
}