#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  double n, aux = 1000, pos;
  bool emp = false;

  for (int i = 0; i < 3; i++) {
    cin >> n;

    if (n <= aux) {
      if (n == aux) emp = true;
      aux = n;
      pos = i;
    }
  }

  if (emp) cout << "Empate" << endl;
  else if (pos == 0) cout << "Otavio" << endl;
  else if (pos == 1) cout << "Bruno" << endl;
  else cout << "Ian" << endl;

  return 0;
}