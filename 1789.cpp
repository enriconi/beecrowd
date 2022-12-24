#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n) {
    int bigger = -1, slug;

    for (int i = 0; i < n; i++) {
      cin >> slug;

      if (slug > bigger) bigger = slug;
    }

    if (bigger >= 20) cout << 3 << endl;
    else if (bigger >= 10) cout << 2 << endl;
    else cout << 1 << endl;
  }

  return 0;
}