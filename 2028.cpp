#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, c = 1;

  while (cin >> n) {
    vector<int> v;

    for (int i = 0; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        v.push_back(i);
      }
    }

    if (v.size() == 0) cout << "Caso " << c++ << ": " << 1 << " numero" << endl;
    else cout << "Caso " << c++ << ": " << (v.size() + 1) << " numeros" << endl;

    cout << 0;
    for (int i = 0; i < v.size(); i++) cout << " " << v[i];
    cout << endl << endl;
  }
  
  return 0;
}