#include <iostream>

using namespace std;

int main()
{
  int n, aux = 1;

  while (cin >> n && n != 0) {
    string a, b;
    int aA, bB;

    cin >> a;
    cin >> b;

    cout << "Teste " << aux << endl;

    for (int i = 0; i < n; i++) {
      cin >> aA >> bB;

      if ((aA + bB) % 2 == 0) cout << a << endl;
      else cout << b << endl;
    }
    cout << endl;
    aux++;
  }
  
  return 0;
}