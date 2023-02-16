#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int aux = 0;
    string a, b;

    cin >> a >> b;

    for (int j = 0; j < a.size(); j++) aux += (b[j] - a[j] + 26) % 26;

    cout << aux << endl;
  }

  return 0;
}