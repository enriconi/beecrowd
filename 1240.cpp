#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;
  char a[1001], b[1001];
  bool isNotEqual = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;

    for (int j = strlen(a) - 1, k = strlen(b) - 1; k >= 0; j--, k--) {
      if (a[j] != b[k] || strlen(b) > strlen(a)) {
        isNotEqual = true;
        break;
      }
    }

    if (isNotEqual) cout << "nao encaixa" << endl;
    else cout << "encaixa" << endl;

    isNotEqual = false;
  }

  return 0;
}