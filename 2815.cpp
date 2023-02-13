#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string s;
  int aux = 1;

  getline(cin, s);

  istringstream iss(s);

  while (iss >> s) {
    if (aux++ != 1) cout << " ";
    if (s[0] == s[2] && s[1] == s[3]) {
      for (int i = 2; i < s.size(); i++) cout << s[i];
    } else {
      cout << s;
    }
  }

  cout << endl;

  return 0;
}