#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  int cases = 1;
  int num;

  while (cin >> num) {
    if (cases > 1) cout << endl;
    cin.ignore();
    
    string s;
    int pair, pairs = 0, m = 0, f = 0;
    char c;

    getline(cin, s);

    istringstream iss(s);

    while (iss >> pair >> c) {
      if (pair == num) {
        pairs++;
        if (c == 'M') m++;
        if (c == 'F') f++;
      }
    }

    cout << "Caso " << cases << ":" << endl;
    cout << "Pares Iguais: " << pairs << endl;
    cout << "F: " << f << endl;
    cout << "M: " << m << endl;
    
    cases++;
  }
  
  return 0;
}