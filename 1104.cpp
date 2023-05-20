#include <iostream>
#include <set>

using namespace std;

int main()
{
  int a, b, nA, nB;
  set <int> sA;
  set <int> sB;
  set <int> diff;

  while (cin >> nA >> nB && (nA != 0 && nB != 0)) {
    for (int i = 0; i < nA; i++) {
      cin >> a;
      sA.insert(a);
    }

    for (int i = 0; i < nB; i++) {
      cin >> b;
      sB.insert(b);
    }

    if (sA.size() >= sB.size()) {
      for (auto el : sB) {
        if (sA.count(el) == 0) diff.insert(el);
      } 
    } else {
      for (auto el : sA) {
        if (sB.count(el) == 0) diff.insert(el);
      } 
    }

    cout << diff.size() << endl;

    sA.clear();
    sB.clear();
    diff.clear();
  }

  return 0;
}