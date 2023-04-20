#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
  int dolares, centavos;

  while (cin >> dolares) {
    cin >> centavos;

    string valor = to_string(dolares);

    for (int i = valor.size() - 3; i > 0; i -= 3) valor.insert(i, ",");
    cout << "$" << valor << "." << setfill('0') << setw(2) << centavos << endl;
  }
  
  return 0;
}