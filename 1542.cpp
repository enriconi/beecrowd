#include <iostream>

using namespace std;

int main()
{
  int q, d, p, aux = 0;

  while (cin >> q && q != 0) {
    cin >> d >> p;
    
    aux = ((q * d * p) / (p - q));
    
    if (aux == 1) cout << "1 pagina" << endl;
    else cout << aux << " paginas" << endl;
  }
  
  return 0;
}