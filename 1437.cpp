#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    string s;
    int aux = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'D') aux++;
      else aux += 3;
    }

    aux %= 4;

    if (aux == 0) cout << "N" << endl;
    else if (aux == 1) cout << "L" << endl;
    else if (aux == 2) cout << "S" << endl;
    else cout << "O" << endl;
  }
  
  return 0;
}