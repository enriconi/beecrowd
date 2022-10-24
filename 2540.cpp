#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, a, aux = 0;
  double calculo;

  while (cin >> n) {    
    for (int i = 0; i < n; i++) {
      cin >> a;
  
      if (a == 1) aux++;
    }

    calculo = (double) n * (2.0 / 3.0);
  
    cout << (aux >= calculo ? "impeachment" : "acusacao arquivada") << endl;

    aux = 0;
  }
  
  return 0;
}