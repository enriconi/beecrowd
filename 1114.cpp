#include <iostream>

using namespace std;

int main()
{
  string n;

  while (cin >> n) {
    if (n != "2002") {
      cout << "Senha Invalida" << endl;
    } else {
      cout << "Acesso Permitido" << endl;
      break;
    }
  }
  
  return 0;
}