#include <iostream>

using namespace std;

int main()
{
  string s;
  
  while (getline(cin, s)) {
    bool auxI = true, auxB = true;

    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '_') {
        if (auxI) {
          s.replace(j, 1, "<i>");
          auxI = false;
        } else {
          s.replace(j, 1, "</i>");
          auxI = true;
        }
      }

      if (s[j] == '*') {
        if (auxB) {
          s.replace(j, 1, "<b>");
          auxB = false;
        } else {
          s.replace(j, 1, "</b>");
          auxB = true;
        }
      }
    }

    cout << s << endl;
  }

  return 0;
}