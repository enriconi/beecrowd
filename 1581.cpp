#include <iostream>

using namespace std;

int main()
{
  int n, a;
  bool equal = true;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    string c[a + 1];

    for (int j = 0; j < a; j++) {
      cin >> c[j];
    }

    for (int k = 0; k < a; k++) {
      if (c[0] != c[k]) equal = false;
    }

    if (equal) cout << c[0] << endl;
    else cout << "ingles" << endl;

    equal = true;
  }
  
  return 0;
}