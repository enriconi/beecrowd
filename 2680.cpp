#include <iostream>

using namespace std;

int main()
{
  int n;
  int a;
  int soma = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    for (int j = 1; (j * j) <= a; j++) {
      if (a % j == 0) {
        soma += j;
        if (j != (a / j)) soma += (a / j);
      }
    }

    cout << soma << endl;

    soma = 0;
  }
  
  return 0;
}