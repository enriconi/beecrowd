#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
  char n[11];
  long long int soma = 0, aux = 0;

  while (cin >> n) {
    for (int i = strlen(n) - 1; i >= 0; i--) {
      soma += (n[i] - 'A' + 1) * pow(26, aux); 
      aux++;
    }

    if (soma <= 16384) cout << soma << endl;
    else cout << "Essa coluna nao existe Tobias!" << endl;
    
    aux = 0;
    soma = 0;
  }

  return 0;
}