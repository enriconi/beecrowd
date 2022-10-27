#include <iostream>

using namespace std;

int main()
{
  int n;
  double a, menor = 12;

  while (cin >> n) {
    for (int i = 0; i < n; i++) {
      cin >> a;
      
      if (a < menor) menor = a;
    }

    cout << menor << endl;
    menor = 12;
  }

  return 0;
}