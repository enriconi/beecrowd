#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
  double aux = 0, count = 0;
  char c;
  string s;

  cin >> c;
  cin.ignore();
  getline(cin, s);

  istringstream iss(s);

  while (iss >> s) {
    count++;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == c) {
        aux++;
        break;
      }
    }
  }

  cout << fixed << setprecision(1);
  cout << ((aux / count) * 100) << endl;
  
  return 0;
}