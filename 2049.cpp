#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string a, b;
  int aux = 1;

  while (cin >> a && a != "0") {
    if (aux != 1) cout << endl;
    cin >> b;

    cout << "Instancia " << aux << endl;
    // npos => uma constante (-1) que representa uma não-posição,
    // que retorna do .find() quando o padrão não foi encontrado
    if (b.find(a) != string::npos) cout << "verdadeira" << endl;
    else cout << "falsa" << endl;
    
    aux++;
  }
    
  return 0;
}